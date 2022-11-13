import java.util.Scanner;

public class factorial {
    public static void main(String[] args){
        int n,fact=1;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number to find factorial: ");
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            fact = fact * i;
        }
        System.out.println("The factorial of number "+n+" is "+fact);

    }
}
