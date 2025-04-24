#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    int z;
    public:
   

    // old way 
    /*
    abc(int _x , int _y,int _z = 0){
       x  =_x;
        y = new int(_y);
        z = _z;
    }
    */

    // initialisation list 
    abc(int _x , int _y , int _z=0):x(_x),y(new int (_y)) , z(_z){ }

   

    int getX()const{
        // x = 30;
        return x;
    }
    int setX(int val){
       x = val;
    }
    int getY()const{
        return *y;
    }
    int setY(int val2){
        *y= val2;
    }
    int getZ()const{
        return z;
    }
};

void print(const abc&a){
    // it can call only const function , because we are accepting const object as a parameter
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main(){
    abc a(10,20);
    print(a);
    abc b(11,22,90);
    print(b);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;

    return 0;
}
int main2(){

    /*

    // const  with pointer

    const int *a = new int(2); // here data is const , but pointer is non-const 
    // int const *a = new int(2); // both are same 
    // *a = 2 ; // not possible 
    cout<<*a<<endl;
   // here you can change pointer 
    int b = 5;
    a = &b;
    cout<<*a<<endl;

    */

    /*
    // const pointer with non-const data 
    int *const a = new int(2);
    cout<<*a<<endl;
    *a = 40;
    cout<<*a<<endl;

   int b = 50;
   a = &b; // nahi chalega 

   */
    // 3: content and pointer both are const 

   const int *const a = new int(30);
   cout<<*a<<endl;
    //    *a = 40; // nahi chalega 
    int b  = 100;
    // a = &b; // nahi chalega

    return 0;
}