#include<iostream>
#include<string>
using namespace std;

// shallow and deep copy 
/*
Shallow copy :- a shallow copy of an object copies all the member value from one object to another 
it create issue when we use dynamically allocated memeory 
deep copy: it not copies the member values but also makes copies of any dynamically allocated memory that the members point to_string
*/

class student{
    public:
    string name;
    double *cgptr; // heap memory allocated , so nedd manully remove destructor

   student(string _name , double _cgptr) : name(_name) , cgptr(new double(_cgptr)){}
    // student(string name , double cgptr){
    //     this->name = name;
    //     this->cgptr = new double;
    //     *this->cgptr = cgptr;


    // }
    //default called copy construtor 
    // student(student &obj){
    //     name = obj.name;
    //     // cgptr = new double;
    //     cgptr = obj.cgptr;
    // }

    // syntax of deep copy
    // student(student &obj){
    //     this->name = obj.name;
    //     this->cgptr = new double;
    //     *cgptr = *obj.cgptr;
    // }

    ~student(){
        delete cgptr;
    }
     
    void getInfo(){ 
        cout<<name<<endl;
        cout<<*cgptr<<endl;
    }

};

int main(){

    // student s1("sagar",4.4); // called parameterised contructor
    student s1("string",7.2);
    delete s1.cgptr;


    student s2(s1); // called by default copy constructor
   /*
    s1.getInfo(); // print s1 info 
    s2.getInfo(); // print s2 info 
    *s2.cgptr = 200; // here get change in s2 pointer , but also reflect in s1 
    s2.getInfo(); // here cgptr change 
    s1.getInfo(); // but here also change , which we dont want 

    // so we need to create deep copy 
    *s1.cgptr = 400;
    s1.getInfo();
    s2.getInfo();

    */
   s2.getInfo();
    
    return 0;
}



// constructor can declare privately , but value cannot be initialised