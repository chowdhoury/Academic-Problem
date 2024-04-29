package com.mycompany.question_1;
public class Question_1 {
    public int age = 9;
    public double height = 12.11;
    public void printBoth() {
        age = age + 1;
        System.out.println(age);
        System.out.println(height);
        height--;
    }

    public static void main(String[] args) {
        Question_1 obj = new Question_1();
        obj.printBoth();
    }
}
