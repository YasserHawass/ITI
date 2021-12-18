class lab11{
	public static void main(String arr[]){
		String sentence = "Hi Hello Babi Hi";
		String word = "Hi";
		System.out.println(countOccurrences(sentence ,word ));
	}

	static int countOccurrences(String sentence, String word){
    		String words[] = sentence.split(" ");
    		int count = 0;
    		for (int i = 0; i < words.length; i++){
		    if (word.equals(words[i]))
		        count++;
	    	}
 
    		return count;
	}
}
