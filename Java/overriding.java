public class overriding {
    public static void main(String[] args){
        Addition obj1=new Addition(4,5);
        Multiplication obj2=new Multiplication(4,5);
        obj1.display();
        obj2.display();
    }
}

class Addition{
    public int add,multi;
    Addition(){}
    Addition(int a,int b){
        add=a+b;
    }
    void display(){
        System.out.println("The addition of two number is "+add);
    }
}
class Multiplication extends Addition{
    Multiplication(int a,int b){
        multi=a*b;
    }
    void display(){
        System.out.println("The Multiplication of two number is "+multi);
    }
}