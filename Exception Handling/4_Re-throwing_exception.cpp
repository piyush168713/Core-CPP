// Program to re-throw an exception.

#include<bits/stdc++.h>

void sub(int j, int k){
    std::cout<<"Inside function sub()\n";
    try{
        if(j==0)
        throw j;
        else
        std::cout<<"Subtraction = "<<j-k<<"\n";
    }
    catch (int){
        std::cout<<"Caught Null value\n";
        throw;
    }
    std::cout<<"*** End of sub() ***\n\n";
}

int main(){
    std::cout<<"\ninside function main()\n";
    try
    {
        sub(8,5);
        sub(0,5);
    }
    catch(int)
    {
        std::cout<<"\ncaught null inside main()\n";
    }
    std::cout<<"\nend of function main()\n";
        
    return 0;
}