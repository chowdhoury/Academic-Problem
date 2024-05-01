class HelloWorld {
    public static void divideNumbers(int a,int b){
        if(b==0) System.out.println("Invalid Operation");
        else System.out.println("Result is "+(a/b));
    }
    public static void main(String[] args) {
        int a=10,b=5;
        divideNumbers(a,b);
    }
}
