import java.util.ArrayList;
import java.util.List;

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

class lab511{
	static void paintShapes(List<? extends Shape> Lists){
		Lists.forEach((shape) -> shape.paint());
	}

	public static void main(String args[]){
		List<Rectangle> list1 = new ArrayList<Rectangle> ();
		list1.add (new Rectangle ());

		List<Circle> list2 = new ArrayList<Circle> ();
		list2.add(new Circle());
		list2.add(new Circle());

		paintShapes(list1);
		paintShapes(list2);
	}
}

