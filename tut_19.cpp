#include<iostream>
using namespace std;

// /********Function Overloading with Examples in C++ **********/

int sum(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

// calculate the volume of cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// calculate the volume of cube
int volume(int a){
    return (a * a * a);
}

// calculate the volume of cuboid
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;
    cout<<"The sum of 5, 6 and 7 is "<<sum(5,6,7)<<endl;
    cout<<"The volume of cuboid 3, 4 and 5 is "<<volume(3,4,5)<<endl;
    cout<<"The volume of cube of side 5 is "<<volume(5)<<endl;
    cout<<"The volume of cylinder of radius 4 and heigth 7 is "<<volume(4,7)<<endl;
    return 0;
}