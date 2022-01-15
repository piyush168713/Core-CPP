// Program to throw exception when j=1 otherwise perform the subtraction of x and y.

// #include<bits/stdc++.h>

// int main(){
//     int x, y;
//     std::cout<<"\nEnter values of x and y: ";
//     std::cin>>x>>y;
//     int j;
//     j = x>y ? 0 : 1;

//     try
//     {
//         if(j==0){
//             std::cout<<"Subtraction (x-y) = "<<x-y<<"\n";
//         }
//         else { throw(j); }
        
//     }
//     catch(int k)
//     {
//         std::cout<<"Exception Caught: j = "<<j<<"\n";
//     }
    
//     return 0;
// }





// Program to define function that generates exception.

#include<bits/stdc++.h>

void sqr(){
    int s;
    std::cout<<"\nEnter a number: ";
    std::cin>>s;
    if(s>0){
        std::cout<<"Square = "<<pow(s,2);
    }
    else{
        throw(s);
    }
}

int main(){
    try{
        sqr();
        sqr();
    }
    catch(int j){
        std::cout<<"Caught an exception\n";
    }
    return 0;
}