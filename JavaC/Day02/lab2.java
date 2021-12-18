import java.util.Arrays;
class lab2{
	public static void main(String arr[]){
		int arrOfNumbers[] = new int[10];
		for(int i = 0; i < 10; i++){
			arrOfNumbers[i] = i;
		}

		printArray(arrOfNumbers);

		int size = arrOfNumbers.length;
		long startTime = System.currentTimeMillis();
		// first Search attempt
		int resPlaceholder = binarySearch(arrOfNumbers, 0, size-1, 2);
		long endTime = System.currentTimeMillis();

		// Printning output
		System.out.println("##################" );
		System.out.println("Timer Started at : " + startTime );
		System.out.println("Timer Ended at : " + endTime );
		System.out.println("Binary Search time taken in millis : " + (endTime - startTime) );
		System.out.println("Index is : " + resPlaceholder );
		System.out.println("##################" );
		
	}

	static void printArray(int arrOfNumbers[]) {
        	for(int i = 0; i < arrOfNumbers.length; i++){
			System.out.println(arrOfNumbers[i]);
		}
	 }
	
	static int binarySearch(int arrOfNumbers[],int start, int end, int value){
		if (end >= start) {
            		int mid = start + (end - start) / 2;

            		if (arrOfNumbers[mid] == value)
                		return mid;

           		if (arrOfNumbers[mid] > value)
                		return binarySearch(arrOfNumbers, start, mid - 1, value);
            	return binarySearch(arrOfNumbers, mid + 1, end, value);
		}
		return -1;
	}
}