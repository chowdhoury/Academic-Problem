public class Example{
    int var;
    public Example(){
        var=10;
    }
    public Example(int x){
        this.var=x;
    }
    public int getValue(){
        return var;
    }
    public static void main(String args[]){
        Example obj1=new Example();
        Example obj2=new Example(100);
        System.out.println("Var is "+obj1.getValue());
        System.out.println("Var is "+obj2.getValue());
    }
}
