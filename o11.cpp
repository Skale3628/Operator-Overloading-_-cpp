//overloading new and delete

#include<iostream>

class demo{
    int x=10;
    public:
    demo(int x){
        this->x=x;
    }
    void getdata(){
        std::cout<<x<<std::endl;
    }
    void* operator new(size_t size){
        //void *ptr=::operator new(size);
        void *ptr=malloc(size);
        return ptr;
    }
    //void operator delete(void *ptr){
        //free(ptr);
    //}

};

int main(){
    std::cout<<sizeof(demo)<<std::endl;
    demo *obj =new demo(50);
    obj->getdata();
    //delete obj;
    return 0;
}