// Program to accept a string and display the string. Use null character for determining the end of string.


// #include<iostream>

// class text{
//     char str[50];
//     public:
//     void get(){
//         std::cout<<"Enter text: ";
//         std::cin.getline(str,50);
//         // std::cin>>str;
//     }
//     char show(int x){
//         if (str[x] == '\0')
//         return 0;
//         else
//         {
//             std::cout<<str[x];
//             return 1;
//         }
//     }
// };

// int main(){
//     int k = -1;
//     text s;
//     s.get();
//     std::cout<<"Entered text: ";
//     while (s.show(++k));
//     return 0;
// }




// Program to enter two strings and concatenate them. Display the resulting string.

// #include<iostream>
// #include<string.h>
// #include<conio.h>

// class text{
//     char text1[15];
//     char text2[15];
//     char text3[30];

//     public:
//     void get(){
//         std::cout<<"Enter First String: ";
//         std::cin.getline(text1,15);
//         std::cout<<"Enter second String: ";
//         std::cin.getline(text2,15);
//     }

//     char len(){
//         return(strlen(text1));
//     }

//     void show(){
//         std::cout<<"\nFirst String: "<<text1;
//         std::cout<<"\nSecond String: "<<text2;
//         std::cout<<"\nThird String: "<<text3;
//     }

//     int combine(int x, int y){
//         text3[x] = text1[x];
//         if (x>=y)
//         text3[x] = text2[x-y];
//         if(text2[x-y] == '\0')
//         return 0;
//         else
//         return 1;
//     }
// };

// int main(){
//     int k= -1, y;
//     text s;
//     s.get();
//     y = s.len();
//     while(s.combine(++k, y));
//     s.show();
//     return 0;
// }




// Program to declare data member of a class as public. Initialize and display them without using function.

// #include<iostream>

// class boy{
//     public:
//     int weight;
//     float height;
// };

// int main(){
//     boy raj, sonu;
//     raj.weight = 35;
//     raj.height = 4.5;

//     sonu.weight = 30;
//     sonu.height = 4.1;

//     std::cout<<"Weight of raj: "<<raj.weight;
//     std::cout<<"\nHeight of raj: "<<raj.height;
//     std::cout<<"\nWeight of sonu: "<<sonu.weight;
//     std::cout<<"\nHeight of sonu: "<<sonu.height;
//     return 0;
// }



// #include<iostream>

// class boy{
//     public:
//     int weight;
//     float height;

//     void raj(){
//         weight = 35;
//         height = 4.5;
//         std::cout<<"Weight of raj: "<<weight;
//         std::cout<<"\nHeight of raj: "<<height;
//     }

//     void sonu(){
//         weight = 30;
//         height = 4.1;
//         std::cout<<"\nWeight of sonu: "<<weight;
//         std::cout<<"\nHeight of sonu: "<<height;
//     }
// };

// int main(){
//     boy x;
//     x.raj();
//     x.sonu();
//     return 0;
// }




// Program to declare constant member function arguments.


// #include<iostream>

// class data{
//     private:
//     int d;
//     public:
//     void set(){
//         d = 10;
//     }
//     void sub(data const &a, data const &b){
//         d = a.d - b.d;
//     }
//     void show(){
//         std::cout<<"d = "<<d;
//     }
// };

// int main(){
//     data a, b, c;
//     a.set();
//     b.set();
//     c.sub(a,b);
//     c.show();
//     return 0;
// }



// Program to show the difference between private and public data members of a class.

// #include<iostream>

// class A{
//     private:
//     char name[20];
//     int age;
//     public:
//     float height;
//     float weight;
// };

// int main(){
//     A x;
//     // x.name = "Sanjay";
//     x.height = 5.5;
//     x.weight = 38;
//     std::cout<<"Height: "<<x.height;
//     std::cout<<"\nWeight: "<<x.weight;
//     return 0;
// }




// Program to initialize private and public member variables of the class. Display the contents of member variables.

// #include<iostream>

// class num{
//     int x;
//     float y;

//     public:
//     char z;
//     void readdata(int j, float k){
//         x = j;
//         y = k;
//     }
//     void display(){
//         std::cout<<"x = "<<x<<"\ny = "<<y;
//     }
// };

// int main(){
//     num r;
//     r.z = 'C';
//     r.readdata(10,10.5);
//     r.display();
//     std::cout<<"\nz = "<<r.z;
//     return 0;
// }





// Member function inside class

// Program to declare class with member variables and functions. Read and display the data using member functions.

// #include<iostream>

// class player{
//     private:
//     char name[20];
//     int age;
//     float height;
//     float weight;
//     public:
//     void input(){
        // std::cout<<"Enter your name: ";
        // std::cin>>name;
        // std::cout<<"Enter your age: ";
        // std::cin>>age;
        // std::cout<<"Enter your height: ";
        // std::cin>>height;
        // std::cout<<"Enter your weight: ";
        // std::cin>>weight;         
//     }
//     void show(){
        // std::cout<<"\nName: "<<name;
        // std::cout<<"\nAge: "<<age;
        // std::cout<<"\nHeight: "<<height;
        // std::cout<<"\nWeight: "<<weight;
//     }
// };

// int main(){
//     player p;
//     p.input();
//     p.show();
//     return 0;
// }



// Member function outside the class

// Program to declare class with member variables and function. Read and display the data using the member functions. Declare function 
// definition outside the class.

// #include<iostream>

// class player{
//     private:
//     char name[20];
//     int age;
//     float height;
//     float weight;
//     public:
//     void input();
//     void show();
// };

// void player :: input(){
//     std::cout<<"Enter your name: ";
//     std::cin>>name;
//     std::cout<<"Enter your age: ";
//     std::cin>>age;
//     std::cout<<"Enter your height: ";
//     std::cin>>height;
//     std::cout<<"Enter your weight: ";
//     std::cin>>weight; 
// }

// void player :: show(){
//     std::cout<<"\nName: "<<name;
//     std::cout<<"\nAge: "<<age;
//     std::cout<<"\nHeight: "<<height;
//     std::cout<<"\nWeight: "<<weight;
// }

// int main(){
//     player p;
//     p.input();
//     p.show();
//     return 0;
// }




// Private member function

// Program to declare private member function and call this member function using another public member function.

// #include<iostream>
// #include<cmath>

// class num{
//     private:
//     int x;
//     int sqr(int);                            // Not understood whole program
//     public:
//     int input(){
//         int n;
//         std::cout<<"Enter a non-zero number: ";
//         std::cin>>n;
//         return sqr(n);        // It calls the private function sqr()
//     }
// };

// int num :: sqr(int k){
//     return k*k;
// }

// int main(){
//     int sq;
//     num p;
//     sq = p.input();
//     std::cout<<"\nSquare of "<<sqrt(sq)<<" is "<<sq;    
//     return 0;
// }



// #include<iostream>
// #include<cmath>

// class A{
//     private:
//     int x;
//     public:
//     void input(){
//         std::cout<<"Enter a no.: ";
//         std::cin>>x;
//     }
//     void show(){
//         std::cout<<"Square root of "<<x<<" is "<<sqrt(x);
//     }
// };

// int main(){
//     A m;
//     m.input();
//     m.show();
//     return 0;
// }





// Program to enter hours. convert it into seconds and minutes. Display results.

// #include<iostream>

// class time{
//     int hours;
//     int minutes;
//     int seconds;
//     public:
//     void input();
//     void show();
//     void convert();
// };

// void time :: input(){
//     std::cout<<"Enter hours: ";
//     std::cin>>hours;
// }

// void time :: show(){
//     std::cout<<"Hour: "<<hours;
//     std::cout<<"\nMinute: "<<minutes;
//     std::cout<<"\nSecond: "<<seconds;
// }

// void time :: convert(){
//     minutes = hours * 60;
//     seconds = minutes * 60;
// }

// int main(){
//     time t;
//     t.input();
//     t.convert();
//     t.show();
//     return 0;
// }




// Program to count the numbers of vowels present in the entered string.

// Error


// #include<iostream>
// #include<stdio.h>
// #include<conio.h>
// #include<ctype.h>
// #include<string.h>

// class vowel{
//     private:
//     char str[20];
//     public:
//     void input(){
//         std::cout<<"Enter text in small case: ";
//         std::cin>>str;
//     }
//     int length(){
//         int l = strlen(str);
//         return 1;
//     }
//     int vowel(int x){
//         if (str[x] == 'a' || str[x] == 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u')
//         {
//             std::cout<<" "<<str[x];
//             return 1;
//         }
//         else
//         return 0;
//     }
// };

// int main(){
//     int i, l, c=0;
//     vowel v;
//     v.input();
//     l = v.length();
//     for (int i = 0; i < l; i++)
//     {
//         c = c+v.vowel(i);
//     }
//     std::cout<<"\n"<<c<<" Vowels are present in the string";
//     return 0;
// }






//  Program to enter text. Find a given character in the string and replace it with another given character.

// Error

// #include<iostream>
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// class text{
//     char str[20];
//     char f;
//     char r;
//     public:
//     void accept(){
//         std::cout<<"Enter text: ";
//         std::cin.getline(str,20);
//         std::cout<<"Find what (char): ";
//         f = getche();
//         std::cout<<"Replace with (char)";
//         r = getche();
//     }
//     void display(int d){
//         std::cout<<put(str[d]);
//     }
//     int len(){
//         int l = strlen(str);
//         return (1);
//     }
//     void find(int i){
//         if (str[i] == f)
//         replace(i);
//     }
//     void replace(int k){
//         str[k] =r;
//     }
// };

// main(){
//     int i, l;
//     text t;
//     t.accept();
//     l = t.len();
//     std::cout<<"Replaced text: "<<std::endl;
//     for (int i = 0; i < l; i++)
//     {
//         t.find(i);
//         t.display(i);
//     }
    
//     return 0;
// }







// Program to find largest out of ten numbers.


// #include<iostream>
// #include<conio.h>
// #include<process.h>

// class num{
//     int number[10];
//     public:
//     int input(int i){
//         std::cout<<"Enter number ("<<i+1<<"): ";
//         std::cin>>number[i];
//         return (number[i]);
//     }
//     void large(int s, int m){
//         if(number[s] == m){
//             std::cout<<"Largest number is: "<<number[s];
//             exit(1);
//         }
//     }
// };

// int main(){
//     int i, sum=0,k;
//     num b;
//     for ( i = 0; i < 10; i++)
//     {
//         sum = sum + b.input(i);
//     }
//     for (k = sum; k>=0; k--)
//     {
//         for(i=0; i<=10;i++)
//         b.large(i,k);
//     }
    
//     return 0;
// }




// Program to count the numbers between 1 and 100, which are not divisible by 2, 3 and 5.

// Error

// #include<iostream>
// #include<cmath>
// #include<stdio.h>
// #include<conio.h>

// class div{
//     static int num;
//     public:
//     void check(int n){
//         if (n%2!=0 && n%3!=0 && n%5!=0)
//         {
//             std::cout<<n<<"\t";
//             num++;
//         }
//     }
//     void show(){
//         std::cout<<"Total numbers: "<<num;
//     }
//     void loop();
// };

// void div :: loop(){
//     int x;
//     std::cout<<"\nNumbers from 1 to 100 not divisible by 2,3 & 5\n\n";
//     for(x=0;x<=100;x++)
//     check(x);
// }

// int div :: num=0;

// int main(){
//     div s;
//     s.loop();
//     s.show();

//     return 0;
// }





// Program to generate the nth Fibonacci number by using recursion.
// Finbonaci series: 1 1 2 3 5 8 13

// #include<iostream>
// #include<cmath>

// class Fibonacci{
//     public:
//     int fib(int x){
//         int f;
//         if(x==0)
//         return 0;
//         if(x==1)
//         return 1;
//         else 
//         f = fib(x-1) + fib(x-2);
//         return f;
//     }
// };

// int main(){
//     Fibonacci f;
//     int y;
//     std::cout<<"Enter a number: ";
//     std::cin>>y;
//     std::cout<<"Sum of Fibonacci number upto "<<y<<" is: "<<f.fib(y);
//     return 0;
// }





#include <bits/stdc++.h>
  
class Fibonacci {
  
public:
    int a, b, c;
    void generate(int);
};
  
void Fibonacci::generate(int n)
{
    a = 0;
    b = 1;
  
    std::cout << a << " " << b;
  
    for (int i = 1; i <= n - 2; i++) {
  
        c = a + b;
        std::cout << " " << c;
  
        a = b;
        b = c;
    }
}
  
int main()
{
    int n = 9;
  
    Fibonacci fib;
    fib.generate(n);
    return 0;
}

