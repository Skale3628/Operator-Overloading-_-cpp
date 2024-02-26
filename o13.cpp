//new and delete

#include<iostream>

class demo{
    int x=10;
    public:
    friend void* operator new(size_t size){
        std::cout<<"here"<<std::endl;
        void *ptr=malloc(size);
        return ptr;
    }
    friend void operator delete(void *ptr){
       std::cout<<"here"<<std::endl;
        free(ptr);
    }
    void getdata(){
        std::cout<<x<<std::endl;
    }
};
int main(){
    demo *obj=new demo();
    obj->getdata();
    delete obj;
    return 0;
}