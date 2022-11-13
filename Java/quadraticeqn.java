import java.util.Scanner;

public class quadraticeqn {
    public static void main(String[] args){
        Double r1,r2,a,b,c;
        System.out.print("enter the value of a,b,c in eqn ax^2+bx+c: ");
        Scanner sc=new Scanner(System.in);
        a= sc.nextDouble();
        b= sc.nextDouble();
        c= sc.nextDouble();
        r1=(-b+Math.sqrt(b*b-4*a*c))/(2*a);
        r2=(-b-Math.sqrt(b*b-4*a*c))/(2*a);
        System.out.println("The root of given quadratic equation are "+r1+" and "+r2);
    }
}
