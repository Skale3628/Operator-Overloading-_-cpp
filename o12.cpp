#include<iostream>

class demo{
    int x=10;
    int y=20;

    public:
    int getx()const{
        return x;   
    }
    int gety()const{
        return y;   
    }
  /*friend std::ostream& operator<<(std::ostream& out,const demo& obj){
     out<<obj.x<<std::endl;
     out<<obj.y<<std::endl;

     return out; */
};

std::ostream& operator<<(std::ostream& out,const demo& obj){
     out<<obj.getx()<<std::endl;
     out<<obj.gety()<<std::endl;

     return out;
}

int main(){
    demo obj;
    std::cout<<obj<<std::endl;

    return 0;
}