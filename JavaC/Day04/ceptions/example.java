import java.io.IOException;
import java.lang.RuntimeException;
import java.lang.ArithmeticException;
import java.util.Scanner;
import java.io.FileInputStream;

class ArithmeticException2 extends ArithmeticException {
	public ArithmeticException2() {
        	super("You laughing? Dividing over zero? and you're laughing?!");
    	}
}

class example{
	public static void main(String args[]){
		divide10By(0);
	}
	
	static void divide10By(int n) throws ArithmeticException2{
		try{
			if (n==0) throw new ArithmeticException2();
			else System.out.println(10/n);
		}catch(ArithmeticException2 e){
			e.printStackTrace();
			System.out.println("here");
		}
	}
}
