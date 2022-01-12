// 1) Program to declare array of class objects. Use constructors and destructors. Read names and display with their length.

// #include<bits/stdc++.h>

// class A1{
//     char name[15];
//     int len;
//     public:
//     A1(){
//         std::cout<<"Enter name: ";
//         std::cin>>name;
//         len = strlen(name);
//     }
//     ~A1(){
//         std::cout<<"\nName: "<<name<<"("<<len<<")";
//     }
// };

// int main(){
//     A1 x[5];
//     std::cout<<"\nEntered names with their length\n\n";
//     return 0;
// }





// 2) Program to create array of objects. Initialize and display them using non-member function.

// #include<bits/stdc++.h>

// class A{
//     public:
//     char c;
//     int i;
//     float f;
//     A(){
//         std::cout<<"\nEnter char, int, float value: ";
//         std::cin>>c>>i>>f;
//     }
// };

// int main(){
//     void out(A);
//     A a[] = {A(), A()};
//     out(a[0]);
//     out(a[1]);
//     return 0;
// }

// void out(A c){
//     std::cout<<"\nchar value = "<<c.c;
//     std::cout<<"\nint value = "<<c.i;
//     std::cout<<"\nfloat value = "<<c.f;
// }





// 3) Program to pass `this` pointer as argument to the member function and display the contents.

// #include<bits/stdc++.h>

// class A{
//     private:
//     char c;
//     int i;
//     float f;
//     public:
//     A(){
//         std::cout<<"\nEnter char, int, float value: ";
//         std::cin>>c>>i>>f;
//         out(this);
//     }
//     void out(A *a){
//         std::cout<<"\nchar value = "<<a->c;
//         std::cout<<"\nint value = "<<a->i;
//         std::cout<<"\nfloat value = "<<a->f;
//         std::cout<<"\n";
//     }
// };

// int main(){
//     A a;
//     return 0;
// }







// 4) Program to assign value using `this` pointer.

// #include<bits/stdc++.h>

// class A{
//     private:
//     int j;
//     public:
//     void setv (int v){
//         j = v;
//         std::cout<<"\nj = "<<j;
//         this->j = ++v;
//         std::cout<<"\nj = "<<j;
//     }
// };

// int main(){
//     A a;
//     a.setv(7);
//     return 0;
// }





// 5) Program to enter integer numbers, count them, and make fragments of equal lengths. The fragmant length to be entered by the user.

// #include<bits/stdc++.h>

// int main(){
//     int *p, *k, s=1;
//     int j, c=0, f, i=0;
//     k=p;
//     std::cout<<"\nEnter numbers (0) to exit: ";
//     while(1){
//         std::cin>>*p;
//         if(*p==0) break;
//         c++;
//         p++;
//     }
//     std::cout<<"\nelements are entered ";
//     std::cout<<"Enter length of fragment: ";
//     std::cin>>f;
//     std::cout<<"Fragment "<<s<<" :";
//     for (j = 0; j < c; j++)
//     {
//         i++;
//         std::cout<<" "<<*(k+j);
//         if(i==f){
//             std::cout<<" ";
//             s++;
//             std::cout<<"\nFragment "<<s<<" :";
//             i=0;
//         }
//     }
    
//     return 0;
// }








// Program to assign different types of data to void pointers. Display the data using void pointers on the screen using typecast 
// syntaxes according to the data type.

#include<bits/stdc++.h>

#define SIZE 25

void show(void *vp, char status){
    switch(status){
        case 'l':
        std::cout<<"\nThe long integer entered: "<<*((long*)vp);
        delete vp;
        break;
        case 'i':
        std::cout<<"\nThe integer entered: "<<*((int*)vp); 
        delete vp;
        break;
        case 's':
        std::cout<<"The entered string: "<<(char*)vp;
        delete vp;
        break;
        case 'f':
        std::cout<<"The float entered: "<<*((float*)vp);
        delete vp;
        break;
    }
}

int main(){
    int *i;
    char *s;
    float *f;
    long *l;
    char choice;
    std::cout<<"\nEnter datatype (s)tring, (i)nt, (f)loat, (l)ong: ";
    std::cin>>choice;
    switch (choice)
    {
    case 'l':
        l = new long;
        std::cout<<"\nEnter a long integer: ";
        std::cin>>*l;
        show(l,choice);
        break;
    case 's':
        s = new char[SIZE];
        std::cout<<"\nEnter a string: ";
        std::cin>>s;
        show(s,choice);
        break;
    case 'i':
        i = new int;
        std::cout<<"\nEnter a integer: ";
        std::cin>>*i;  
        show(i, choice); 
        break;
    case 'f':
        f = new float;
        std::cout<<"\nEnter a float: ";
        std::cin>>*f;
        show(f,choice);
        break;
    
    default:
        std::cout<<"Invalid choice";
    }

    return 0;
}