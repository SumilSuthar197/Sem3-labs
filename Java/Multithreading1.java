public class Multithreading1 {
    public static void main(String[] args){
        hello obj1=new hello();
        hi obj2=new hi();
        obj1.start();
        obj2.start();
    }
}

class hello extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            Thread t1=Thread.currentThread();
            System.out.println(t1.getName());
            System.out.println("Hello");
            try {Thread.sleep(1000);
            }catch (Exception e){};
        }
    }
}

class hi extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            Thread t2=Thread.currentThread();
            System.out.println(t2.getName());
            System.out.println("Hi");
            try {Thread.sleep(1000);
            }catch (Exception e){};
        }
    }
}
