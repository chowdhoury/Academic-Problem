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
        Human h2 = new Human();
        System.out.println(h1.age);
        System.out.println(h1.height);
        h2.height = h1.height -  3;
        h2.age = h1.age + 1;
        h1.printBoth();
        h2.printBoth();
        h2=h1;
        h2.age++;
        h2.height++;
        h1.printBoth();
        h2.printBoth();
        System.out.println(h2.age);
        System.out.println(h1.height);
    }
}
