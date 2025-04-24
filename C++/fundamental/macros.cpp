#include<iostream>
using namespace std;

#define PI 3.14159465 

// way of define macros
// for increase readability

#define MAXX(x,y) (x > y ? x : y)

float circleArea(float r){
    return 3.14*r*r;
}


int main(){
    cout<<circleArea(5)<<endl;
    int a = 10;
    int b = 20;
    int c = 0;

    /*
    // for avoid conditional operations 
    if(a > b){
        c = a;
    }
    else{
        c = b;
    }

    */
    int c = MAXX(a,b);
    cout<<"c = "<<c<<endl;
    return 0;
}