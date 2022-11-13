import java.util.Scanner;

public class matrixMul {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows and column of A matrix:");
        int r1=sc.nextInt();
        int c1= sc.nextInt();
        System.out.println("Enter the number of rows and column of B matrix:");
        int r2=sc.nextInt();
        int c2= sc.nextInt();

        if(c1==r2) {
            int [][]a=new int[r1][c1];
            int [][]b=new int[r2][c2];
            int [][]c=new int[r1][c2];
            System.out.println("Enter the element of matrix A:");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    a[i][j] = sc.nextInt();
                }
            }
            System.out.println("The matrix A:");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    System.out.print(a[i][j] + " ");
                }
                System.out.println();
            }
            System.out.println("Enter the element of matrix B:");
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    b[i][j] = sc.nextInt();
                }
            }
            System.out.println("The matrix B:");
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print(b[i][j] + " ");
                }
                System.out.println();
            }
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    c[i][j]=0;
                    for(int k=0;k<c1;k++) {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            System.out.println("Multiplication of matrix A and B is ");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print(c[i][j] + " ");
                }
                System.out.println();
            }
        }
        else {
            System.out.println("matrix multiplication is not possible");
        }
    }
}
