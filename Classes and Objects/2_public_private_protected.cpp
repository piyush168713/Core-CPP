// #include<iostream>

// class item{
//     private:
//     double radius;

//     public:
//     int codeno;
//     float prize;
//     int qty;

//     void setdata(double r){
//         radius = r;
//         double area = 3.14*radius*radius;

//         std::cout<<"Radius is: "<<radius<<std::endl;
//         std::cout<<"Area is: "<<area<<std::endl;
//     }
// };

// int main(){ 
//     item one;
//     one.codeno = 123;
//     one.prize = 12.34;
//     one.qty = 344;
//     std::cout<<"Code no. : "<<one.codeno<<std::endl;
//     std::cout<<"Prize: "<<one.prize<<std::endl;
//     std::cout<<"Quantity: "<<one.qty<<std::endl;

//     one.setdata(2);
//     return 0;
// }



// #include<iostream>

// class sample{
//     private:
//     int num;
//     void show1(){
//         std::cout<<"Inside the private section\n";
//         std::cout<<"Enter a number: \n";
//         std::cin>>num;
//         std::cout<<"Number is: "<<num;
//     }

//     public:
//     int num1;
//     void show(){
//         show1();    // It access the private section
//         std::cout<<"\n\nInside the public section\n";
//         std::cout<<"Enter a number: \n";
//         std::cin>>num1;
//         std::cout<<"Number is: "<<num1;
//         show2();   // It access the protected section
//     }

//     protected:
//     int num2;
//     void show2(){
//         std::cout<<"\n\nInside the protected section\n";
//         std::cout<<"Enter a number: \n";
//         std::cin>>num2;
//         std::cout<<"Number is: "<<num2;
//     }
// };

// int main(){
//     sample s;
//     s.show();    // It only access the public section
//     return 0;
// }



//   *** Program to access private member of a class using member function
//         Member Function Inside the class

// #include<iostream>

// class item{
    
//     private:
//     int codeno;
//     float prize;
//     int qty;

//     public:
//     void show() {
//         codeno = 123;
//         prize = 34.34;
//         qty = 500;
//         std::cout<<"Codeno. is: "<<codeno<<std::endl;
//         std::cout<<"Prize is: "<<prize<<std::endl;
//         std::cout<<"Quantity is: "<<qty<<std::endl;
//     }
// };

// int main(){
//     item p;
//     p.show();
//     return 0;
// }



//       ***  Program to declare private member function and access it using public member function ***
//         Member Function Inside the class

// #include<iostream>

// class item{
//     private:
//     int codeno;
//     int price;
//     int qty;
//     void values() {
//         codeno = 344;
//         price = 23.34;
//         qty = 233;
//     }

//     public:
//     void show(){
//         values();   //  Call the private member function
//         std::cout<<"Code no is: "<<codeno<<std::endl;
//         std::cout<<"Price is: "<<price<<std::endl;
//         std::cout<<"Quantity is: "<<qty<<std::endl;
//     }
// };

// int main(){
//     item n;
//     // n.values();  // Not accessible
//     n.show();
//     return 0;
// }





// ****  Program to define member function of class outside the class
//       Member Function defined Outside the class

// #include<iostream>

// class item{
//     private:
//     int codeno;
//     float price;
//     int qty;

//     public:
//     void show(void);
// };         // End of class

// void item::show() {          // Definition outside the class
//     codeno = 344;
//     price = 23.34;
//     qty = 233;
//     std::cout<<"Code no is: "<<codeno<<std::endl;
//     std::cout<<"Price is: "<<price<<std::endl;
//     std::cout<<"Quantity is: "<<qty<<std::endl;
// }

// int main(){
//     item n;
//     n.show();
//     return 0;
// }



//   ***    OUTSIDE MEMBER FUNCTION AS INLINE   ***   //

// #include<iostream>

// class item{
//     private: 
//     int codeno;                   // Member data variables
//     float price;
//     int qty;

//     public:
//     void show(void);              // Prototype Declaration
// };         // End of class

// inline void item::show() {          // Definition outside inline function
//     codeno = 344;
//     price = 23.34;
//     qty = 233;
//     std::cout<<"Code no is: "<<codeno<<std::endl;
//     std::cout<<"Price is: "<<price<<std::endl;
//     std::cout<<"Quantity is: "<<qty<<std::endl;
// }

// int main(){
//     item n;
//     n.show();    // Call to public member function (inline)
//     return 0;
// }