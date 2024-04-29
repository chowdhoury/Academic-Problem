public class Human {
    public int age = 9;
    public double height = 12.11;
    public void printBoth() {
        age = age + 1;
        System.out.println(age);
        System.out.println(height);
        height--;
    }

    public static void main(String[] args) {
        Human h1 = new Human();
        h1.printBoth();
    }
}
