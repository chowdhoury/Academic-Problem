package com.raihan.main;
public class Main {

    public static void main(String[] args) {
        Person p=new Person();
        p.setName("Raihan");
        p.setAge(22);
        System.out.println("Name: "+p.getName());
        System.out.println("Age: "+p.getAge());
    }
}
package com.raihan.main;
public class Person {
    private String name;
    private int age;
    public void setName(String a){
        this.name=a;
    }
    public void setAge(int c){
        this.age=c;
    }
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
}
