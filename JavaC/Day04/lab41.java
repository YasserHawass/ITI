import java.io.IOException;
import java.lang.RuntimeException;
import java.lang.ArithmeticException;
import java.util.Scanner;
import java.io.FileInputStream;
/*
Create your own exception class and write down two other
classes, the first will contain three methods throwing your
newly created exception class and the second class will be
calling the methods that throws exception using the try-catch-
finally block.
*/
// checked and unchecked, try with resources too

class FileFormatException extends IOException {
	public FileFormatException(String err) {
		//super("Read the documentation ...");
		super(err);
	}
}

class ArithmeticException2 extends ArithmeticException {
	public ArithmeticException2() {
        	super("You laughing? Dividing over zero? and you're laughing?!");
    	}
}

class lab41{
	public static void main(String args[]){
		lab41 t = new lab41();
		//t.computeFunction();
		//t.divide10By(0);
		t.readNews();
	}

	int fact(int n) throws FileFormatException{
		if(n<0) throw new FileFormatException("Read the documentation ...");
		if(n==1) return 1;
		return n*fact(n-1);
	}

	public void computeFunction() {
		System.out.println("Compute Function is running");
		try{
			System.out.println("Fact (-5) = " + fact(-5));
		} catch(FileFormatException e){
	 		e.printStackTrace();
		}
	}
	
	public void divide10By(int n) throws ArithmeticException2{
		try{
			if (n==0) throw new ArithmeticException2();
			else System.out.println(10/n);
		}catch(ArithmeticException2 e){
			e.printStackTrace();
			System.out.println("here");
		}
	}
	
	public void readNews(){
		try (Scanner in = new Scanner(new FileInputStream("news.txt"))) {
			while (in.hasNext())
				System.out.println(in.next());
		} catch(IOException e){
			System.out.println("Oh no the fox stole the newspaper, and left ...");
			e.printStackTrace();
		}
	}
}
