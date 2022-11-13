import java.util.Scanner;

public class overloading {
    //Constructor Overloading
    overloading(){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("n = "+n);
    }
    overloading(int a,int b){
        System.out.println("a = "+a+" b = "+b);
    }
    //Method Overloading
    void add(int a,int b){
        System.out.println("the addition of integer a and b is "+(a+b));
    }
    void add(double a,double b){
        System.out.println("the addition of double a and b is "+(a+b));
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        overloading ob1=new overloading();
        overloading ob2=new overloading(4,5);
        ob1.add(4,5);
        ob1.add(4.2,5.3);
    }
}
