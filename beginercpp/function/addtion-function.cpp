#include<iostream>
using namespace std;

//defining a function
// int a, and int b are the parameter 
int addtion(int a, int b){
    int z;
    z=a+b;
    return z;
} 
//substrraction function
int substraction(int a,int b){
    int r;
    r=a-b;
    return r;

}

int main(){
    int r;
    r=addtion(3,5);
    cout<<r<<endl;

    int x=2,y=3,result;
    result=substraction(5,3); //passing an argument for substracion
    cout<<"the first result is "<<result<<endl;
    cout<<"the second result is "<<substraction(x,y)<<endl;
    cout<<"the third result is "<<result+4<<endl;

}