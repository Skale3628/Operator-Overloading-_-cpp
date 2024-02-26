//unary operator prefix increment /decrement and postfix increment /decrement
#include<iostream>

class demo{
    int x=10;
    public:
   
    int operator++(int){
        return ++x;
    }
     int operator++(){
        int temp=x;
        ++x;
        return temp;
    }
    friend std::ostream& operator<<(std::ostream& out,const demo& obj){
        out<<obj.x;
        return out;
    }
};
int main(){
    demo obj;
    std::cout<<++obj<<std::endl;                    //prefix
    std::cout<<obj++<<std::endl;                    //postfix
    std::cout<<obj<<std::endl;
    return 0;
}