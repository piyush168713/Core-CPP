//         -----------   Data Hiding / Abstract Data type  -----------       //

// Data hiding nothing but making data variable of the class private.



// Program to calculate simple interest. Hide the data elements of the CLASS using private keyword.

// #include<iostream>
// #include<cmath>

// class interest {
//     private:
//     float p_amount;    // Principle amount
//     float rate;    //  rate of interest
//     float period;   // no. of years
//     float interest;
//     float t_amount;    // total amount

//     public:
//     void read(){
//         std::cout<<"Principal Amount: ";
//         std::cin>>p_amount;
//         std::cout<<"Rate of interest: ";
//         std::cin>>rate;
//         std::cout<<"No. of years: ";
//         std::cin>>period;
//         interest = (p_amount*rate*period) / 100;
//         t_amount = interest + p_amount;
//     }
//     void show(){
//         std::cout<<"Principal Amount: "<<p_amount<<std::endl;
//         std::cout<<"Rate of interest: "<<rate<<std::endl;
//         std::cout<<"No. of years: "<<period<<std::endl;
//         std::cout<<"Interest: "<<interest<<std::endl;
//         std::cout<<"Total amount: "<<t_amount<<std::endl;
//     }
// };

// int main(){
//     interest i;
//     i.read();
//     i.show();
//     return 0;
// }





// Program to declare CLASS with private, public and protected sections. Declare object and access data elements of these different sections.


#include<iostream>

class access{
    private:
    int p;
    void getp(){
        std::cout<<"In getp() enter the value of p: ";
        std::cin>>p; 
    }

    public:
    int h;
    void geth(){
        std::cout<<"In geth(): "<<std::endl;
        getp();         // Access private section
        getm();         // Access protected section
        std::cout<<"p = "<<p<<"\nh = "<<h<<"\nm = "<<m;
    }

    protected:
    int m;
    void getm(){
        std::cout<<"In getm() enter the value of m: ";
        std::cin>>m;
    }
};

int main(){
    access a;
    
    a.h = 5;
    a.geth();
    return 0;
}