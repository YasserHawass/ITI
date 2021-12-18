import java.util.regex.*; 
class lab11r{
	public static void main(String arr[]){
		String sentence = "Hi Hello Babi Hi Hi";
		String word = "Hi";
/*
		Pattern p = Pattern.compile(word);
		Matcher m = p.matcher(sentence);
		while(Matcher m = p.matcher("as");
		System.out.println(Pattern.matches("%%", "as"));//true (2nd char is s) 
*/

		Matcher matcher = Pattern.compile(String.valueOf(word)).matcher(sentence);
  		int count = 0;
  
        	while (matcher.find()) {
            		count++;
        	}
		System.out.println(count);
	}

}
