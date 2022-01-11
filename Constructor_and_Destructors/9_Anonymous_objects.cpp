// Calling constructor directly means creating anonymous objects.


// Program to create an anonymous object. Initialize and display the contents of member variables.

// #include<iostream>

// class anonym{
//     private:
//     int x;
//     public:
//     anonym(int j){
//         std::cout<<"\n In constructor";
//         x = j;
//         show();
//     }
//     anonym(){
//         std::cout<<"\n In constructor";
//         x = 15;
//         show();
//     }
//     ~anonym(){
//         std::cout<<"\n In destructor";
//     }
//     anonym *const show(){
//         std::cout<<std::endl<<"x = "<<x;
//         return this;
//     }
// };

// int main(void){
//     anonym();
//     anonym(12);
//     return 0;
// }







//       PRIVATE constructors AND destructors


// Program to declare constructor and destructor as private and call them explicitly.

// #include<iostream>

// class A{
//     private:
//     int x;
//     ~A(){
//         std::cout<<"\nIn destructor ~A()";
//     }
//     A(){
//         x = 7;
//         std::cout<<"\nIn constructor A()";
//     }
//     public:
//     void show(){
//         this->A::A();     // Invokes constructor
//         std::cout<<std::endl<<"x = "<<x;
//         this->A::~A();     // Invokes destructor
//     }
// };

// int main(){
//     A *a;
//     a->show();
//     return 0;
// }