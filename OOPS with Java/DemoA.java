abstract class SuperClass {
  SuperClass(){
    System.out.println("Super class");
  }
  public void fun(){
    System.out.println("Can also define methods");
  }

  public abstract void print();
}

class SubClass extends SuperClass{
  SubClass(){
    System.out.println("SubClass");
  }
  //compulsory to implement print
  public void print(){
    System.out.println("Hello!");
  }
}

public class DemoA{
  public static void main(String args[]){
    SubClass sub = new SubClass();
    sub.print();
    sub.fun();

    //SuperClass sup = new SuperClass();

  }
}
