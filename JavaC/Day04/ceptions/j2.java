class j2{
	public static void main(String args[]){
		//try{}catch(){}
		try{
			System.out.println(5/0);
		}catch(Exception e){
			//System.out.println(e);
			e.printStackTrace();
		}
	}	
}