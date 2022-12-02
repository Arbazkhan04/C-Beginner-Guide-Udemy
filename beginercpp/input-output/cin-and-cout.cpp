#include<iostream>
#include<string>
using namespace std;
int main(){
    string myst;
    cout<<"What is Your Name ";
    getline(cin,myst);
    cout<<"Your name is "<<myst<<endl;
    cout <<"What is Favoute color "<<endl;
    getline(cin,myst);
    cout<<"I also like "<<myst <<" color too";
    return 0;

}