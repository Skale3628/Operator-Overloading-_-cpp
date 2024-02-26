//operator overloading
//overloaded operators in C++ are called operator functions.

#include<iostream>
class demo{
    public:
    int x=10;
    void getdata(){
        std::cout<<"in getdata"<<std::endl;
    }
    friend int operator+(const demo&,const demo&);
};

int operator+(const demo&obj1,const demo& obj2){
   return obj1.x+obj2.x;
}
int main(){
    demo obj1;
    demo obj2;

    std::cout<<obj1+obj2<<std::endl;        //overloading + operator
    
    //ostream& operator<<(ostream& cout,int obj.x)  internal call
    
    return 0;
}