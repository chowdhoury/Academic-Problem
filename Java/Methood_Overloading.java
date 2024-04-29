public class Overloading{
    public void sum(int a,int b){
        System.out.println(a+b);
    }
    public void sum(int a,int b,int c){
        System.out.println(a+b+c);
    }
    public static void main(String args[]){
        Overloading obj=new Overloading();
        obj.sum(20,30);
        obj.sum(10,20,30);
    }
}
