class jx{
	public static void main(String args[]){
		int[] numbers_1 = {4,10,12};
		int[] numbers_2 = {4,0,3};

		for(int i = 0; i< numbers_1.length;i++){
			try{
				System.out.println(numbers_1[i] / numbers_2[i]);
			}catch(Exception e){
				System.out.println("Did you make an illegal move?");
			}
		}
	}	
}