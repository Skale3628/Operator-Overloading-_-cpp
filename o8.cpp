#include<iostream>

class demo{
    int x;
    int y;
    public:
    friend std::istream& operator>>(std::istream& in,demo& obj){
        in >> obj.x;
        in >> obj.y;
        return in;
    }
    void printdata(){
        std::cout<<x<<" "<<y<<std::endl;
    }
};
int main(){
    demo obj;
    std::cout<<"enter value"<<std::endl;
    std::cin>>obj;

    obj.printdata();
}