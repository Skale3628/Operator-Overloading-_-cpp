//overloading arithmetic operator

#include<iostream>
class demo{
    int x=10;
    int y=20;
    public:
    demo(int x,int y){
        this->x=x;
        this->y=y;
    }
    friend int operator*(const demo& obj1,const demo& obj2){
        return obj1.x * obj2.x;
    }

};
int main(){
    demo obj1(30,40);
    demo obj2(50,60);

    std::cout<<obj1*obj2<<std::endl;

    return 0;
}