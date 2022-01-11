//          Dynamic initialization using constructors

// After declaration of the class data member variables, they can be initialized at the time of program execution using pointers.



// Program to initialize memeber variables using pointers and constructors.

// #include<iostream>
// #include<string.h>

// class city{
//     char citi[20];
//     char state[20];
//     char country[20];
//     public:
//     city(){
//         citi[0] = state[0] = country[0] = NULL;
//     }
//     void display(char *line);
//     city(char *cityn)
//     {
//         strcpy(citi, cityn);
//         state[0]=NULL;
//     }
//     city(char *cityn, char *staten)
//     {
//         strcpy(citi, cityn);
//         strcpy(state, staten);
//         country[0]= NULL;
//     }
//     city(char *cityn, char *staten, char *countryn)
//     {
//         strcpy(citi, cityn);
//         strcpy(state, staten);
//         strcpy(country, countryn);
//     }
// };

// void city:: display (char *line){
//     std::cout<<line<<std::endl;
//     if (strlen(citi))
//     std::cout<<"City: "<<citi<<std::endl;
//     if(strlen(state))
//     std::cout<<"State: "<<state<<std::endl;
//     if(strlen(country))
//     std::cout<<"Country: "<<country<<std::endl;
// }

// int main(void){
//     city c1("Jammu & Kashmir"), c2("Manali", "HP"), c3("Garhwal", "Uttarakhand", "India"), c4('\0','\0','\0');

//     c1.display("====");
//     c2.display("====");
//     c3.display("====");
//     c4.display("====");
//     return 0;
// }






//          Dynamic operators and constructors


// Program to use new and delete operators with constructors and destructor. Allocate memory for the given numbers of integers. Also release the memory.

// #include<iostream>

// int number(void);

// class num{
//     int *x;
//     int s;
//     public:
//     num(){
//         s = number();
//         x = new int [s];
//     }
//     ~num(){
//         delete x;
//     }
//     void input();
//     void sum();
// };

// void num :: input()
// {
//     for (int h = 0; h < s; h++)
//     {
//         std::cout<<"Enter number ["<<h+1<<"]: ";
//         std::cin>>x[h];
//     }
// }

// void num :: sum()
// {
//     int adi=0;
//     for (int h = 0; h < s; h++)
//         adi+=x[h];
//         std::cout<<"Sum of elements = "<<adi;
// }

// int number(){
//     int n;
//     std::cout<<"How many numbers: ";
//     std::cin>>n;
//     return n;
// }

// int main(){
//     num n1;
//     n1.input();
//     n1.sum();
//     return 0;
// }






//          main() as a constructor and destructor


// Program to declare class with name main.

#include<iostream>

class main{
    public:
    main(){
        std::cout<<"\nIn constructor main()";
    }
    ~main(){
        std::cout<<"\nIn destructor main()";
    }
};

int main(){
    class main a;
    return 0;
}

// when class name is main, it is compulsory to use keyword class or struct to declare objects.