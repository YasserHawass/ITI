class lab11t2{
	public static void main(String arr[]){
		String sentence = "Hello*****World i'm here*!*";
		String word = "Hello";
		String words[] = sentence.split("\\*");
    		int count = 0;
    		for (int i = 0; i < words.length; i++){
			if (word.equals(words[i]))
		        	count++;
		    	System.out.println(words[i]);
	    	}
		System.out.println(count);
	}
}
