//                     POINTER TO CLASS

// The starting address of the member variable can be accessed. such pointers are called class pointers.

// Example

// class book{
//     char name[15];
//     char author[20];
//     int pages;
// };
// class book *ptr;







// Program to declare a class. Declare pointer to class. Initialize and display the contents of the class member.

// #include<bits/stdc++.h>

// int main(){
//     class man{
//         public:
//         char name[12];
//         int age;
//     };
//     man m = {"Piyush", 20};
//     man *ptr;
//     // ptr = &(man)m;
//     *ptr = (man)m;
//     // *ptr = man(m);
//     // *ptr = m;
//     // ptr = &m;

//     std::cout<<"\n"<<m.name<<" "<<m.age;
//     std::cout<<"\n"<<ptr->name<<" "<<ptr->age;
//     return 0;
// }








//                                 POINTER TO OBJECT

// Program to declare an object and pointer to the class. Invoke the member functions using pointer.


// #include<bits/stdc++.h>

// class bill{
//     int qty;
//     float price;
//     float amount;
//     public:
//     void getdata(int a, float b, float c){
//         qty = a;
//         price = b;
//         amount = c;
//     }
//     void show(){
//         std::cout<<"Quantity: "<<qty;
//         std::cout<<"\nPrice: "<<price;
//         std::cout<<"\nAmount: "<<amount;
//     }
// };

// int main(){
//     bill x;
//     bill *ptr = &x;
//     ptr->getdata(45, 45.5, 500);
//     (*ptr).show();
//     return 0;
// }





// Program to create dynamically an array of objects of class type. Use new operator

#include<bits/stdc++.h>

class bill{
    int qty;
    float price;
    float amount;
    public:
    void getdata(int a, float b, float c){
        qty = a;
        price = b;
        amount = c;
    }
    void show(){
        std::cout<<"\nQuantity: "<<qty;
        std::cout<<"\nPrice: "<<price;
        std::cout<<"\nAmount: "<<amount;
    }
};

int main(){
    bill *s = new bill[2];
    bill *d = s;
    int x, i;
    float y;
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"Enter Quantity and Price: ";
        std::cin>>x>>y;
        s->getdata(x,y,x*y);
        s++;
    }
    for (int i = 0; i < 2; i++)
    {
        std::cout<<std::endl;
        d->show();
        d++;
    }
    
    return 0;
}