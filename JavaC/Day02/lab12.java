import java.util.StringTokenizer;

class lab12{
	public static void main(String arr[]){
		String sentence = "Hi Hello Babi Hi";
		String word = "Hi";
		System.out.println(countOccurrences(sentence ,word ));
	}

	static int countOccurrences(String sentence, String word){
		int count = 0;
		StringTokenizer words = new StringTokenizer(sentence);
	     	while (words.hasMoreTokens()) {
			String x = words.nextToken();
			if (word.equals(x))
		        	count++;
     		}
		return count;
	}
}
