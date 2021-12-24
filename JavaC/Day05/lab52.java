import java.util.function.Predicate;
class lab52{
	public static void main(String args[]){
		String string = "Hello World";
		System.out.println(StringUtils.isAllLetters(string, (s)-> {
			for(int i = 0; i < string.length(); i++){
				if(!Character.isLetter(string.charAt(i)))
					return false;
				
			}
			return true;
		}));
	}
}

class StringUtils{
	static Boolean isAllLetters(String s, Predicate<String> f){
		return f.test(s);
	}
}