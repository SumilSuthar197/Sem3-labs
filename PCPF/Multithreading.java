public class Multithreading {
    public static void main(String[] args){
        Multi1 obj1=new Multi1();
        Multi2 obj2=new Multi2();
        Thread t1=new Thread(obj1);
        Thread t2=new Thread(obj2);
        t1.start();
        t2.start();
    }
}
class Multi1 implements Runnable{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(120*i);
            try {Thread.sleep(1000);
            }catch (Exception e){};
        }
    }
}
class Multi2 implements Runnable{
    public void run(){
        for(char i='a';i<='z';i++){
            System.out.println(i);
            try {Thread.sleep(330);
            }catch (Exception e){};
        }
    }
}
