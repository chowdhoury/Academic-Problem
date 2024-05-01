public class Dog {
    private String color="Black";
    public Dog(String a){
        this.color=a;
    }
    public Dog(){
        this.color="Black";
    }
    public void bark(){
        System.out.println(color+" dog is barking");
    }
    public void changeColor(String b){
        this.color=b;
    }
    
}
public class Midterm {

    public static void main(String[] args) {
        Dog scooby = new Dog();
        Dog odie = new Dog("Red");
        Dog goofy = new Dog("Blue");
        scooby.bark();
        odie.bark();
        goofy.bark();
        scooby.changeColor("Brown");
        scooby.bark();
        
    }
}
