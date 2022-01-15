// Program to catch multiple exceptions.

#include<bits/stdc++.h>

void num(int k){
    try{
        if (k==0) throw k;
        else
        if (k>0) throw 'P';
        else
        if (k<0) throw .0;
        std::cout<<"*** try block ***\n";
    }
        catch
        {
            std::cout<<"\nCaught an exception\n";
        }
        
    }

int main(){
    num(0);
    num(5);    
    num(-1);
    return 0;
}