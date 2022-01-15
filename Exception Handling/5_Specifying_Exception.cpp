// Program to restrict a function to throw only specified type of exception.

#include<bits/stdc++.h>

void check (int k) throw (int, double){
    if (k==1) throw 'K';
    else
    if (k==2) throw k;
    else
    if (k==-2) throw 1.0;
    std::cout<<"*** End of function check() ***\n";
}

int main(){
    try
    {
        std::cout<<"k==1\n";
        check(1);
        std::cout<<"k==2\n";
        check(2);
        std::cout<<"k==-2\n";
        check(-2);
        std::cout<<"k==3\n";
        check(3);
    }
    catch(char g)
    {
        std::cout<<"Caught character a exception";
    }
    catch(int j)
    {
        std::cout<<"Caught integer a exception";
    }
    catch(double s)
    {
        std::cout<<"Caught double a exception";
    }
    std::cout<<"\nEnd of main()";
    
    // return 0;
}