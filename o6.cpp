//overloading arithmetic operator

#include<iostream>
class demo{
    int x=10;
   
    public:
    demo(int x){
        this->x=x;
      
    }
     int operator+(const demo& obj2){
        return this->x + obj2.x;
    }

};
int main(){
    demo obj1(40);
    demo obj2(60);

    std::cout<<obj1+obj2<<std::endl;

    return 0;
}