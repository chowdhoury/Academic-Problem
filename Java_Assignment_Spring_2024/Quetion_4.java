package com.raihan.test;
public class Test {
    public static void testFruit(Fruit f){ // Fruit m
        System.out.println("----Printing Detail-----");
        if(f.hasFormalin()){
            System.out.println("Do not eat the "+f.getName()+".");
            System.out.println(f);
        }else{
            System.out.println("Eat the "+f.getName()+".");
            System.out.println(f);
        }
    }
    public static void main(String[] args) {
        Mango m=new Mango();
        testFruit(m);
        Jackfruit j=new Jackfruit();
        testFruit(j);
    }
}
/*
----Printing Detail-----
Do not eat Mangoes.
Mangos are bad for you.
----Printing Detail-----
Eat the Jackfruit.
Jackfruits are good for you.
*/

package com.raihan.test;
public class Fruit {
    private boolean formalin=false;
    public String name="";
    public Fruit(boolean formalin,String name){
        this.formalin=formalin;
        this.name=name;
    }
    public String getName(){
        return name;
    }
    public boolean hasFormalin(){
        return formalin;
    }
}

package com.raihan.test;
public class Mango extends Fruit {
    public Mango() {
        super(true, "Mangoes");
    }

    @Override
    public String toString() {
        return "Mangos are bad for you.";
    }
}

package com.raihan.test;
public class Jackfruit extends Fruit {
    public Jackfruit() {
        super(false, "Jackfruit");
    }

    @Override
    public String toString() {
        return "Jackfruits are good for you.";
    }
}
