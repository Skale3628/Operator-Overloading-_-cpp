#include<iostream>
class demo{
    int x=10;
    int y=20;

    friend std::ostream& operator<<(std::ostream& out,const demo& obj){
        out<<obj.x;     //ostream& operator<<(ostream& out,int obj.x)
        return out;
    }
};
int mian(){
    demo obj1;
    std::cout<<obj1<<std::endl;
}s