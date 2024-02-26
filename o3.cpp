#include<iostream>

class demo{
    int a=10;
    public:
    demo(){

    }

};
int main(){
    int x=10;
    std::cout<<x<<std::endl;

    //operator<<(cout,x);           ==>>function call
    //prototype:
    //ostream& operator<<(ostream&,int);            ==>>predefined

    demo obj;
   // std::cout<<obj<<std::endl;            ->error

     //operator<<(cout,obj);           ==>>function call
    //prototype:
    //ostream& operator<<(ostream&,demo&);            ==>>not predefined
    return 0;
}