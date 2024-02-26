//overloading arithmetic operator

#include<iostream>
class demo{
    int x=10;
    public:
    demo(int x){
        this->x=x;
    }
    friend int operator+(const demo&,const demo&);

};
int operator+(const demo& obj1,const demo& obj2){
    std::cout<<"here..."<<std::endl;
    return obj1.x+obj2.x;
}
int main(){
    demo obj1(30);
    demo obj2(40);

    std::cout<<obj1+obj2<<std::endl;

    return 0;
}