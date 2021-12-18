class lab1{
	public static void main(String arr[]){
		int arrOfNumbers[] = new int[10];
		for(int i = 0; i < 10; i++){
			arrOfNumbers[i] = (int)(Math.random() * 20);
		}
		printArray(arrOfNumbers);

		long startTime = System.currentTimeMillis();
		// first Search attempt
		int resPlaceholder[] = findMinMax(arrOfNumbers);
		long endTime = System.currentTimeMillis();

		// Printning output
		System.out.println("Min : " + resPlaceholder[0] + " Max : " + resPlaceholder[1]);
		System.out.println("Timer Started at : " + startTime );
		System.out.println("Timer Ended at : " + endTime );
		System.out.println("Time Taken in millis : " + (endTime - startTime) );
		
	}

	static void printArray(int arrOfNumbers[]) {
        	for(int i = 0; i < arrOfNumbers.length; i++){
			System.out.println(arrOfNumbers[i]);
		}
	 }

	static void bubbleSort(int arrOfNumbers[]) {
	        int n = arrOfNumbers.length; // readibility sake <3
	        for (int i = 0; i < n-1; i++)
	            for (int j = 0; j < n-i-1; j++)
	                if (arrOfNumbers[j] > arrOfNumbers[j+1]) {
	                    int temp = arrOfNumbers[j];
        	            arrOfNumbers[j] = arrOfNumbers[j+1];
                	    arrOfNumbers[j+1] = temp;
                	}
	}
	
	static int[] findMinMax(int arrOfNumbers[]){
		int min = arrOfNumbers[0];
		int max = arrOfNumbers[0];
		for(int i = 0; i < arrOfNumbers.length; i++){
			// System.out.println(arrOfNumbers[i]);
			if(min > arrOfNumbers[i])
				min = arrOfNumbers[i];
			if(max < arrOfNumbers[i])
				max = arrOfNumbers[i];
		}
		int[] res = {min, max};
		return res;
	}
}