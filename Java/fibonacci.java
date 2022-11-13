import java.util.Scanner;

public class fibonacci  {
    public static void main(String[] args){
        int n,a=0,b=1,c;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of term in fibonacci series: ");
        n=sc.nextInt();
        System.out.print(a+"\t"+b);
        for(int i=0;i<n-2;i++){
            c=a+b;
            System.out.print("\t"+c);
            a=b;
            b=c;
        }
    }
}
