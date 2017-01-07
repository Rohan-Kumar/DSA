class Employee {

  //private field
  private int age;
  private String name;

  //access private properties using public methods
  
  public void setAge(int age){
    this.age = age;
  }

  public int getAge(){
    return age;
  }

  public void setName(String name){
    this.name = name;
  }

  public String getName(){
    return name;
  }
}

public class DemoE{
  public static void main(String args[]){
    Employee emp = new Employee();
    emp.setAge(21);
    emp.setName("Rohan");
    System.out.println("Hello " + emp.getName() + "! Aren't you " + emp.getAge() + "years old?");
  }
}
