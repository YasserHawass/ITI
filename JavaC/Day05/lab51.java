import java.util.function.BinaryOperator;
/*
Your goal is to make a method called betterString that takes
two Strings and a lambda that says whether the first of the two
is “better”.
The method should return that better String; i.e., if the
function given by the lambda returns true, the betterString
method should return the first String, otherwise betterString
should return the second String.
*/
class lab51{
	public static void main(String args[]){
		String string1 = "Hello";
		String string2 = "Worldaa";
		String longer = StringUtils.betterString(string1, string2, (s1, s2) -> s1.length() > s2.length()? s1 : s2);
		System.out.println(longer);
		String first = StringUtils.betterString(string1, string2, (s1, s2) -> s1);
		System.out.println(first);
	}
}

class StringUtils{
	// it would have been better if used Predicate, but meh
	static String betterString(String s1, String s2, BinaryOperator<String> f){
		return f.apply(s1,s2);
	}
}