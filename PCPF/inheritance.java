public class inheritance {
    public static void main(String[] args){
        A ob1=new A(4,5);
        ob1.show();
        B ob2=new B();
        ob2.area(5);
        ob2.show();
        C ob3=new C();
        ob3.perimeter(5);
        ob3.show();
    }
}

class A{
    protected int lside,nside;
    A(){}
    A(int a,int b){
        nside=a;
        lside=b;
    }
    void show(){
        System.out.println("a = "+nside+" and b = "+lside);
    }
}
class B extends A{
    public int peri,area;
    void area(int n){
        nside=n;
        area=nside*nside;
    }

    void show() {
        System.out.println("The area of square is "+area);
    }
}
class C extends B{
    void perimeter(int n){
        lside=n;
        peri=4*lside;
    }

    void show() {
        System.out.println("The perimeter of square is "+peri);
    }
}
