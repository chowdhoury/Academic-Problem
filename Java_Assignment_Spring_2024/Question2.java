public class Test {
    // Member variables
    public int sum = 1;
    public int y = 5;
    private int x = 3;

    // Default constructor
    public Test() {
        sum += 3;
        y = sum + y + x;
    }

    // Parameterized constructor
    public Test(int a, int b) {
        x -= a;
        y = b + y + 2 * x;
    }

    // Method A
    public void methodA() {
        // Increment y by 7
        y += 7;
        // Update x with y + 5
        x = y + 5;
        // Calculate sum
        sum = x + y;
        // Print x, y, and sum
        System.out.println(x + " " + y + " " + sum);
    }

    // Method B
    public void methodB() {
        // Increment y by 11
        y += 11;
        // Update x with x + 33 - y
        x = x + 33 - y;
        // Update sum
        sum += x + y;
        // Print x, y, and sum
        System.out.println(x + " " + y + " " + sum);
    }
    public static void main(String args[]){
        Test t1 = new Test(); // Creates a Test object using the default constructor
        Test t2 = new Test(1, 4); // Creates a Test object using the parameterized constructor

        t1.methodA(); // Calls methodA on t1
        t2.methodA(); // Calls methodA on t2
        t1.methodB(); // Calls methodB on t1
        t2.methodB(); // Calls methodB on t2
    }
}
