import java.io.IOException;
import java.lang.RuntimeException;
import java.lang.ArithmeticException;
import java.util.Scanner;
import java.io.FileInputStream;

class FileFormatException extends IOException {
	public FileFormatException(String err) {
		//super("Read the documentation ...");
		super(err);
	}
}

class fib{
	public static void main(String args[]){
		fib t = new fib();
		t.computeFunction();
	}

	int fact(int n) throws FileFormatException{
		if(n<0) throw new FileFormatException("Read a math book ...");
		if(n==1) return 1;
		return n*fact(n-1);
	}

	public void computeFunction() {
		try{
			System.out.println("Fact (-5) = " + fact(-5));
		} catch(FileFormatException e){
	 		e.printStackTrace();
		}
	}
}