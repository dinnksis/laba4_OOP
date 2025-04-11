#include <iostream>
#include <array.hpp>

int main(){
    MyArray <int,15> arr_int;
    arr_int.fill(30);
    std::cout<<"arr_int:"<<std::endl;
    for (int i=0;i<arr_int.Size();i++){
        std::cout<<arr_int[i]<<" ";
    }
    std::cout<<"\n";

    MyArray <std::string,10> arr_str;
    arr_str.fill("aaa");
    std::cout<<"arr_str:"<<std::endl;
    std::cout<<"arr_str size: "<<arr_str.Size()<<std::endl;
    for (int i=0;i<arr_str.Size();i++){
        std::cout<<arr_str[i]<<" ";
    }
    std::cout<<"\n";


    MyArray <double,15> arr_double;
    std::cout<<"double_arr:"<<std::endl;
    for (int i=0;i<arr_double.Size();i++){
        arr_double[i]=(i+1)*0.1;
    }

    for (int i=0;i<arr_double.Size();i++){
        std::cout<<arr_double[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"front: "<<arr_double.Front()<<", back: "<<arr_double.Back()<<std::endl;


}