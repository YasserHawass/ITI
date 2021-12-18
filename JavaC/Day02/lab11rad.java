import java.util.regex.*; 
// this app counts words that got a pattern of \w+a\w+d\w+
class lab11rad{
	public static void main(String args[]){
		String sentence = "Hi Hello Babi Hi Hi ahmed ahmad mohamad as";
		String word = "Hi";
/*
		Pattern p = Pattern.compile(word);
		Matcher m = p.matcher(sentence);
		while(Matcher m = p.matcher("as");
		System.out.println(Pattern.matches("%%", "as"));//true (2nd char is s) 
*/		
		// to accept da pattern too
		// \\w*[ad]\\w*[ad]\\w*
		Matcher matcher;
		if(args.length == 2){
			matcher = Pattern.compile("\\w*" + args[0]+"\\w*"+args[1]+"\\w*").matcher(sentence);
		} else if(args.length == 1){
			System.out.println("Using one parameter behaviour");
			matcher = Pattern.compile("\\w*" + args[0]+"\\w*d\\w*").matcher(sentence);
		} else{
			System.out.println("Using testing parameters behaviour");
			matcher = Pattern.compile("\\w*a\\w*d\\w*").matcher(sentence);
		}
  		int count = 0;
  
        	while (matcher.find()) {
            		count++;
        	}
		System.out.println(count);
	}

}
