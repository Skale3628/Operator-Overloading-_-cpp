#include<iostream>
class demo{
    public:
    int x=10;
    void getdata(){
        std::cout<<"in getdata"<<std::endl;
    }
    friend std::ostream& operator<<(const std::ostream& cout,const demo& obj);
};

std::ostream& operator<<(const std::ostream& cout,const demo& obj){
    std::cout<<obj.x<<std::endl;
   // return cout;
}
int main(){
    demo obj;
    std::cout<<obj<<std::endl;
    
    //ostream& operator<<(ostream& cout,int obj.x)  internal call
    
    return 0;
}