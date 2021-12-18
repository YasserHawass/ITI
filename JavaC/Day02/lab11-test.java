class lab11t{
	public static void main(String arr[]){
		String sentence = "yasser.hawass@gmail.com";
		String words[] = sentence.split("@");
    		int count = 0;
    		for (int i = 0; i < words.length; i++){
		    System.out.println(words[i]);
	    	}

	}
}
