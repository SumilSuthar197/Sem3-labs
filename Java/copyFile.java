import java.io.*;
public class copyFile{
	public static void main(String[] args) throws IOException{
		FileInputStream in=new FileInputStream("C:\\Users\\Sumil\\Documents\\GitHub\\Sem3-labs\\Java\\hello.txt");
		FileOutputStream out=new FileOutputStream("C:\\Users\\Sumil\\Documents\\GitHub\\Sem3-labs\\Java\\hi.txt");
		
		int c;
		int k=0;
		while((c=in.read())!=-1){
			out.write(c);
			System.out.println((char)c);
			k++;
		}
		System.out.println(k);
	}
}