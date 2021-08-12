#include<iostream>
using namespace std;

int main(){
/******** Loops in C++ ********

Types of Loops:
    1. For Loop 
    2. While Loop
    3. Do-While Loop  */


// ----------- For loops in C++ ------------ //

// Syntax for For Loop
    // for(initialization, condition, updation)
    // {
    //     loop body(c++ code);
    // }
    
// Example of Infinite For Loop
    // for (int i = 0; 34 <= 50; i++)    //This can only be True statement (34<=40) so, Loop will move on till infinite.
    // {
    //     cout<<i<<endl;
    // }
    
// Normal For Loop    
    // for (int i = 0; i < 5; i++)
    // {
    //    cout<<i<<endl;
    // }

//Print the multiple of 6 using for Loop by taking the value from userside
// int result, n;
// cout<<"Enter the value of n: ";
// cin>>n;
//     for (int i = 1; i <= 10; i++)
//     {
//         result = i*n;
//         cout<<result<<endl;
//     }
    
    


// ------------ While loops in C++ ------------ //

// Syntax for While Loop
    // while (condition)
    // {
    //     C++ statements;
    // }
    
// Print 1 to 40 using while Loop
    // int i = 1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

// Print infinite while Loop
    // int i = 1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

//Print the multiple of 6 using while Loop
    // int i=1;
    // int result;
    // while (i<=10)
    // {
    //     result = 6*i;       
    //     cout<<result<<endl;
    //     i++;
    // }


    // int i=1;
    // int sum, n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // while (i<=10)
    // {
    //     sum = i+n;
    //     cout<<sum<<endl;
    //     i++;
    // }
    
    
    
        
// ------------ Do While loops in C++ ------------ //

// syntax for do while
    // do 
    // {
    //     C++ statements;
    // }while (condition);

// Print 1 to 40 using do while Loop
    // int i = 1;    
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // // } while (i<=40);
    // }while (false);

// Print infinite do while Loop
    // int i = 1;    
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while (true);
    
//Print the multiple of 6 using do while Loop by taking the value from userside
    int i = 1;
    int result, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    do
    {       
        
        result=i*n;
        cout<<result<<endl;
        i++;
        
    }while (i<=10);

    
//Print the multiple of 6 using do while Loop by taking the value from itself
    // int i = 1;
    // int result;
    // do
    // {              
    //     result=i*6;
    //     cout<<result<<endl;
    //     i++;
        
    // }while (i<=10);


    return 0;
}
