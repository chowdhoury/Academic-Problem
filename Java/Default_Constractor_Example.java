public class Box1{
    int height;
    int width;
    public Box1()
    {
        System.out.println("Box Created");
        height = 10;
        width = 20;
    }
    public static void main(String args[]){
        Box1 box1 = new Box1();
        System.out.println(box1.height);
        System.out.println(box1.width);
        Box1 box2 = new Box1();
        System.out.println(box2.height);
        System.out.println(box2.width);
    }
}
