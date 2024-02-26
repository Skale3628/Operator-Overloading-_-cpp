//overloading relational operators

#include<iostream>
class demo{
    int x=10;
    public:
    demo(int x){
        this->x=x;
    }
    friend int operator<(const demo& obj1,const demo& obj2) { 
            return obj1.x<obj2.x;
    }
};
int main(){
    demo obj1(50);
    demo obj2(70);
    std::cout<< (obj1<obj2)<<std::endl;
    return 0;

}