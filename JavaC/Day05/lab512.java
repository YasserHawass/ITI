import java.math.BigDecimal;
/*
Create a generic class that could be used to represent complex
numbers
Create some generic methods that represent basic arithmetic
operation on complex(addition, subtraction, etc...)
*/

class lab512{
	public static void main(String args[]){
		BigDecimal a = new BigDecimal(5);
		BigDecimal b = new BigDecimal(2);
		//Complex c1 = new Complex(a,b);
		Complex<Double> c1 = new Complex<>(5.2,2.5);
		//Complex c2 = new Complex(5,1);
		//System.out.println(c1.getReal());
		//Complex result = Complex.add(c1,c2);
		//System.out.println(result.getReal());
	}
}

class Complex<R>{
	
	private BigDecimal real;
	private BigDecimal imag;
	
	Complex(R r, R i){
		this.real = BigDecimal.valueOf(r);
		this.imag = BigDecimal.valueOf(i);
	}
	
	public R getReal() {
    		return real;
  	}
	public R getImag() {
    		return imag;
  	}

	public static Complex add(Complex c1, Complex c2) {
    		return new Complex(BigDecimal.value(c1.real) + BigDecimal.value(c2.real) , c1.imag + c2.imag);
  	}
	
	
}

