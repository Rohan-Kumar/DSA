class Animal {
  String name;

  //default constructor - will be called if super is not called from subclass constructor
  Animal(){
    System.out.println("Animal Constructor");
  }

  //parameterized constructor
  Animal(String name){
    this.name = name;
    System.out.println("Name set");
  }

  public void name(){
    System.out.println("Animal name:"+name);
  }
}

class Dog extends Animal {
  int age;

  //default constructor
  Dog(){
    System.out.println("Dog Constructor");
  }

  //parameterized constructor
  Dog(String name,int age){
    //call the super class constructor
    super(name);
    this.age = age;
    System.out.println("Dog name and age set");
  }

  public void Bark(){
    System.out.println("Bow Bow");
  }

  //overridden method
  public void name(){
    //will access property 'name' from 'Animal' class
    System.out.println("Dog name:"+name);
  }

}

class Cat extends Animal {

  int age;

  //default constructor
  Cat(){
    System.out.println("Cat Constructor");
  }

  //parameterized constructor
  Cat(String name,int age){
    //call the super class constructor
    super(name);
    this.age = age;
    System.out.println("Cat name and age set");
  }

  public void Purr(){
    System.out.println("Meow Meow");
  }
}

public class DemoI{

  public static void main(String args[]){

    Dog dog = new Dog("Dog",10);
    dog.Bark();
    //will call the overridden method
    dog.name();

    Cat cat = new Cat("Cat",5);
    cat.Purr();
    //calling methods of super class
    cat.name();
  }

}
