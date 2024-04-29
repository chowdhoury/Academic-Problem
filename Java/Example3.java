public class Example3{
    private String id;
    private String name;
    private double cgpa;
    public void insert_Record(String id,String name,double cgpa){
        this.id=id;
        this.name=name;
        this.cgpa=cgpa;
    }
    public void display_Record(){
        System.out.println("Name: "+name);
        System.out.println("Id: "+id);
        System.out.println("CGPA: "+cgpa);
    }
    public static void main(String args[]){
        Example3 st1 = new Example3();
        st1.insert_Record("0242310005341002","Md Raihan Chowdhoury",3.77);
        st1.display_Record();
    }
}
