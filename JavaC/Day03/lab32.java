/*
Use the interfaces in java.util.function to build an application
that defines the roots of the quadratic equation
*/

import java.util.function.*;
class QuadSolver implements Consumer<Double[]>{
	public void accept(Double[] equation){
		double a = equation[0];
		double b = equation[1];
		double c = equation[2];
		double root1, root2;
		double determinant = b * b - 4 * a * c;
		if (determinant > 0) {
      			// two real and distinct roots
      			root1 = (-b + Math.sqrt(determinant)) / (2 * a);
      			root2 = (-b - Math.sqrt(determinant)) / (2 * a);
      			System.out.format("root1 = %.2f and root2 = %.2f", root1, root2);
    		} else if (determinant == 0) {
      			// two real and equal roots, determinant is equal to 0, so -b + 0 == -b
      			root1 = root2 = -b / (2 * a);
      			System.out.format("root1 = root2 = %.2f;", root1);
    		}else {
      			// roots are complex number and distinct
      			double real = -b / (2 * a);
      			double imaginary = Math.sqrt(-determinant) / (2 * a);
      			System.out.format("root1 = %.2f+%.2fi", real, imaginary);
      			System.out.format("\nroot2 = %.2f-%.2fi\n", real, imaginary);
    		}
	}
}

class lab32{
	public static void main(String args[]){
		Double[] x = {2.3,4.0,5.6};
		QuadSolver temp = new QuadSolver();
		temp.accept(x);
	}
}