/*
Develop an application to convert temperature from
Centigrade to Fahrenheit using Function<T,R>
*/
import java.util.function.Function;

class TempConvertor implements Function<Double, Double>{
	public Double apply(Double c_temp){
		// Conversion Equation (celecius_d * 9/5) + 32
		Double f_temp = ((c_temp*9)/5)+32;
		return f_temp;
	}
}

class lab31{
	public static void main(String args[]){
		TempConvertor temp = new TempConvertor();
		System.out.println(temp.apply(40.0));
	}
}
