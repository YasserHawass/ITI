import java.util.ArrayList;

abstract class Shape{
	abstract void paint();
}

class Rectangle extends Shape{
	void paint(){
		System.out.println("Rectangle painting");
	}
}

class Circle extends Shape{
	void paint(){
		System.out.println("Circle painting");
	}
}

class lab511x{
	static void paintShapes(ArrayList<? extends Shape> lists){
		for(int i = 0; i < lists.size(); i++){	
			lists.get(i).paint();
		}
	}

	public static void main(String args[]){
		ArrayList<Rectangle> arr1 = new ArrayList<Rectangle> ();
		arr1.add (new Rectangle ());

		ArrayList<Circle> arr2 = new ArrayList<Circle> ();
		arr2.add(new Circle());
		arr2.add(new Circle());

		paintShapes(arr1);
		paintShapes(arr2);
	}
}

