//array
//subscript operator overloading



#include<iostream>
class demo{
    int arr[5]={10,20,30,40,50};

    public:
    void getarray(){
        for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
    int& operator[](int index){
        return arr[index];
    }
    int operator()(int x,int y){
        return x+y;
    }
};

int main(){
    demo obj;
    obj[2]=70;
    obj.getarray();
    int res=obj(50,70);
    std::cout<<res<<std::endl;
    return 0;
}