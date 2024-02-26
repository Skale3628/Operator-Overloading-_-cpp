//overloading relational operator

#include<iostream>
class demo{
    int x,y;
    public:
    demo(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getx() const {
        return x;
    }
    int gety() const {
        return y;
    }
   // friend int operator<(const demo& obj1,const demo& obj2) { 
        //    return obj1.x<obj2.x;
  //  }
};
int operator<(const demo& obj1,const demo& obj2){
    return (obj1.getx()<obj2.getx()) && (obj1.gety()<obj2.gety());

}
int main(){
    demo obj1(50,10);
    demo obj2(70,80);
    std::cout<< (obj1<obj2)<<std::endl;
    return 0;

}