public class Raihan{
    void max(int a,int b){
        System.out.println((a>b)? a:b);
    }
    void max(int a,int b,int c){
        System.out.println((a>b)? a:(b>c)? b:c);
    }
    void max(double a,double b){
        System.out.println((a>b)? a:b);
    }
    public static void main(String args[]){
        Raihan obj=new Raihan();
        obj.max(1,2);
        obj.max(1,2,3);
        obj.max(1.5,2.5);
    }
}
