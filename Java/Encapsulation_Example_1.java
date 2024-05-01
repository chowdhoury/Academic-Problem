package com.raihan.main;
public class Main {

    public static void main(String[] args) {
        Person p=new Person();
        p.setName("Raihan");
        System.out.println(p.getName());
    }
}
package com.raihan.main;
public class Person {
    private String name;
    public void setName(String a){
        this.name=a;
    }
    public String getName(){
        return name;
    }
}
