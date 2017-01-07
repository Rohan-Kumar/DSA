class Shape {
  Shape(){
    System.out.println("Creating a new shape...");
  }
  public void Draw(){
    System.out.println("Drawing...");
  }
}

class Square extends Shape{
  int height;
  public Square(int h) {
    height = h;
    System.out.println("Creating a new Square...");
  }
  public void Draw(){
    System.out.println("Drawing Square...");
  }
  public int Area(){
    return height*height;
  }
}
class Circle extends Shape{
  int radius;
  public Circle(int r) {
    radius = r;
    System.out.println("Creating a new Circle...");
  }
  public void Draw(){
    System.out.println("Drawing Circle...");
  }
  public int Area(){
    return radius*radius;
  }
}
public class DemoP {
  public static void main(String args[]){

    Shape c = new Circle(5);
    c.Draw();
    //cannot call c.Area();

    Square sq = new Square(4);
    sq.Draw();

    int area = sq.Area();
    System.out.println("Area is "+area);
  }
}
