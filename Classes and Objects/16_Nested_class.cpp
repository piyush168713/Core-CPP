// Nested Class - Class is defined in another class
// In nested class the scope of inner class is restricted by outer class.


// Program to display some message using nested class.

// #include<iostream>

// class one{
//     public:
//     class two{
//         public:
//         void display(){
//             std::cout<<"Wonderful Language C++"<<std::endl;
//         }
//     };
// };

// int main(){
//     one :: two x;
//     x.display();
//     return 0;
// }




#include<iostream>

class A{
    public:
    class B{
        private:
        int num;
        public:
        void getdata(int n){
            num = n;
        }
        void display(){
            std::cout<<"The number is: "<<num;
        }
    };
};

int main(){
    std::cout<<"Nested classes in C++"<< std::endl;
    A::B x;
    x.getdata(5);
    x.display();
    return 0;
}