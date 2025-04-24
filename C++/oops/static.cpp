/*
 
static keyword in  class
static Data memeber :- That variable is going to share the memory location of all the  class instance
static member function :- There is no instance of that class being passed into the method 

*/
#include<iostream>
using namespace std;

/*
  STATIC DATA MEMEBER 
class abc{
    public:
    int x , y;
    static int z;
    void print(){
        cout<<"x = "<<x<<" y = "<<y<<endl;;
    }

};

int abc::z = 100;

int main(){
    abc obj1 = {1,2};
    abc obj2;
    
    obj2.x = 10;
    obj2.y = 20;

    cout<<obj1.z<<endl;
    cout<<obj2.z<<endl;
    obj2.print();
    obj1.print();
}

*/

//static memeber functon 

// static membe rfunction  can access of only static variable and can set value of only static variable

class abc{
    public:
    int x,y;
    static int z;

    // non static variable cannot have to static function , it will not work 
    static void print(){
        // cout<<x<<" "<<y<<endl;
        printf("I am in static %s\n", __FUNCTION__);
    }
    static void print1(){
        // no this pointer available
        cout<<"z = "<<z<<endl;
    }

};
int abc::z = 10; // initialistion 
int main(){

    abc a;
    abc::print1(); // acceess 
    
    abc::print();
    abc::print();
    abc::print();

}