package com.raihan.myclass;
public class MyClass {

    public static void main(String[] args) {
        Student s1=new Student();
//        s1.setName("Raihan");
//        s1.setId(1002);
//        s1.setCgpa(3.77);
        s1.Student("Nusu", 1109, 3.15);
        System.out.println("Name: "+s1.getName());
        System.out.println("Id: "+s1.getId());
        System.out.println("Cgpa: "+s1.getCgpa());
        
    }
}
package com.raihan.myclass;
public class Student {
    private String name;
    private int id;
    private double cgpa;
    public void Student(String x,int y,double z){
        this.name=x;
        this.id=y;
        this.cgpa=z;
    }
    public void setName(String a){
        this.name=a;
    }
    public void setId(int b){
        this.id=b;
    }
    public void setCgpa(double c){
        this.cgpa=c;
    }
    public String getName(){
        return name;
    }
    public int getId(){
        return id;
    }
    public double getCgpa(){
        return cgpa;
    }
}
