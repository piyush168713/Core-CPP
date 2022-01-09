//                         ***   Array of Objects   ***                          //

// Program to declare the array of objects. Initialize and display the contents of arrays.

// #include<iostream>

// class player{
//     private:
//     char name[20];
//     int age;
//     public:
//     void input(void);
//     void display(void);
// };

// void player::input(){          // Member function defined outside the class
//     std::cout<<"\nEnter player's name: ";
//     std::cin>>name;
//     std::cout<<"Enter age: ";
//     std::cin>>age;
// }

// void player::display(){          // Member function defined outside the class
//     std::cout<<"\nPlayer's name: "<<name;
//     std::cout<<"\nPlayer's age: "<<age;
// }

// int main(){
//     player p[3];
//     std::cout<<"Enter Name and age of 3 player's: "<<std::endl;
//     for (int i = 0; i < 3; i++)
//     {
//         p[i].input();
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         p[i].display();
//     }
    
//     return 0;
// }





//                    ***             OBJECTS as Function Arguments               ***                  //


// Similar to variables, object can be passed to function by three methods: 
//  1. Pass by value - Copy of object sent to function. Changes made in formal object are not reflected to actual object.
//  2. Pass by refernce - Address of object is implicitly sent to function
//  3. Pass by Address - Address of object is explicitly sent to function



// 1) Program to pass objects of the function by pass-by-value method.

// #include<iostream>

// class life{
//     int mfgyr;
//     int expyr;
//     int yr;
//     public:
//     void getyrs(){
//         std::cout<<"\nManufacture year: ";
//         std::cin>>mfgyr;
//         std::cout<<"\nExpiry year: ";
//         std::cin>>expyr;
//     }
//     void period(life);
// };

// void life::period(life y1){
//     yr = y1.expyr-y1.mfgyr;                          // Pass-by-value
//     std::cout<<"\nLife of product: "<<yr<<"years";
// }

// int main(){
//     life p;
//     p.getyrs();
//     p.period(p);
//     return 0;
// }



// 2) Program to pass objects to the function pass-by-address method.

#include<iostream>

class life{
    int mfgyr;
    int expyr;
    int yr;
    public:
    void getyrs(){
        std::cout<<"\nManufacture year: ";
        std::cin>>mfgyr;
        std::cout<<"\nExpiry year: ";
        std::cin>>expyr;
    }
    void period(life*);
};

void life::period(life *y1){
    yr = y1->expyr - y1->mfgyr;
    std::cout<<"\nLife of product: "<<yr<<std::endl;
}

int main(){
    life m;
    m.getyrs();
    m.period(&m);
    return 0;
}