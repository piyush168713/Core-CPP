// Program to throw multiple exceptions and define multiple catch statement.

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
    catch (char g){
        std::cout<<"Caught a positive number\n";
    }
    catch (int j){
        std::cout<<"Caught a null number\n";
    }
    catch (double f){
        std::cout<<"Caught a Negative value\n";
    }
    std::cout<<"*** try catch ***\n";
}

int main(){
    std::cout<<"Demo of multiple catches\n";
    num(0);
    num(5);    
    num(-1);    
    return 0;
}