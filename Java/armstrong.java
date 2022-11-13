import java.util.Scanner;

public class armstrong {
    public static void main(String[] args){
        int n,a,arms=0,temp;
        System.out.print("Enter the number:");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        a=n;
        while(a!=0){
            temp = a%10;
            arms=arms+(temp*temp*temp);
            a = a/10;
        }
        if(n==arms){
            System.out.println("The number "+n+" is a armstrong number");
        }
        else{
            System.out.println("The number "+n+" is not a armstrong number");
        }

    }

}
