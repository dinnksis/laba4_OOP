
#include <memory>
#include <iostream>


#ifndef MYARRAY
#define MYARRAY

template <class T,int size>
class MyArray{
    public:
        MyArray():size_(size){
            data_ = std::make_unique<T[]>(size_);
        }
        MyArray(const MyArray& arr):size_(arr.size){
            data_=std::make_unique<T[]>(size_);
            for ( int i=0;i<copysize,i++){
                data_[i]=arr.data_[i];
            }
        }

        MyArray& operator= (const MyArray& arr){
            if (&arr!= this){
                data_=std::make_unique<T[]>(arr.size_);
            }
            for ( int i=0;i<arr.size_,i++){
                data_[i]=arr.data_[i];
            }
            size_=arr.size_();
            return *this;
        }
    
        ~MyArray()=default;


        T& operator[](std::ptrdiff_t index){ 
            if (size_<index){
                std::cout<<"size<index"<<std::endl;
            }
            return data_[index];
        } 
        
        T operator[](const std::ptrdiff_t index) const{  
            if (size_<index){
                std::cout<< "size<index"<<std::endl;
            }
            return data_[index];
        }

        int Size() const {
            return size_;
        }


        void fill(const T& val){
            for (int i=0;i<size_;i++){
                data_[i]=val;
            }
        }

        T& Front() const {
            return data_[0];
        }

        T& Back() const {
            return data_[size_-1];
        }

    private:
        std::unique_ptr<T[]> data_ = nullptr;
        const std::ptrdiff_t size_=0;
};
#endif