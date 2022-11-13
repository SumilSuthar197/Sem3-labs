import java.util.Scanner;

public class floyd {
    static int fact(int a){
        if(a==0)
            return 1;
        else {
            return a*fact(a-1);
        }
    }
    public static void main(String[] args){
        int n,k=0;
        System.out.print("Enter the number of rows in Floyd triangle: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                k++;
                System.out.print(k+" ");
            }
            System.out.println();
        }
        System.out.print("Enter the number of rows in pascal triangle: ");
        n=sc.nextInt();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                System.out.print(" ");
            }
            for(int j=0;j<=i;j++){
                System.out.print((fact(i)/(fact(j)*fact(i-j))+" "));
            }
            System.out.println();
        }

    }
}
