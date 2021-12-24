import java.math.BigDecimal;

import java.util.ArrayList;

class Complex<T extends BigDecimal,R extends BigDecimal >{

	private T real;

       	private R imag;


	Complex()
 {

		real.valueOf(0);

		imag .valueOf(0);

	}

	Complex(T r)
{

		real = r;

	}

	Complex(T r, R i)
 {


		real = r;

		imag = i;

	}

	void setReal(T r)
 {

		real = r;

	}

	void setImag(R i)
 {

		imag = i;

	}

	T getReal()
 {

		return real;

	}

	R getImag()
 {

		return imag;

	}

	
Complex add(Complex c) {

           	Complex < BigDecimal,BigDecimal> com=new Complex ();

            
	com.real=this.real .add( c.real);

		com.imag=this.imag .add(c.imag);

                return com;
		
	
	}
	
	Complex sub(Complex c) {

		Complex < BigDecimal,BigDecimal> com=new Complex ();

            
		com.real=this.real .subtract(c.real);

		com.imag=this.imag .subtract(c.imag);

                return com;

		}	
	
	
void print()
 {

		System.out.println( real+" " +imag+" i") ;

	}

	void setComplex(T r, R i)
 {

		real = r;

		imag = i;

	}

}

 
 
 

public class lab5122 {

    
    public static void main(String[] args) {

        	BigDecimal x=new BigDecimal(5);

        	BigDecimal y=new BigDecimal(6);
        	BigDecimal z=new BigDecimal(8);


        	Complex < BigDecimal,BigDecimal> com=new Complex (x,y);

     		Complex < BigDecimal,BigDecimal> com2=new Complex (z,z);

     		com=com.add(com2);

     		com=com.sub(com2);

     		com=com.sub(com2);

    		com.print();

    
    }

}