#include <iostream>
#include <memory>
#include <vector>


#ifndef MYVECTOR
#define MYVECTOR

class Myvector{
    public:
        Myvector();
        Myvector::Myvector(std::ptrdiff_t size);
        Myvector(const Myvector&); //конструктор копирования
        Myvector(Myvector&&); //конструктор перемещения
        ~Myvector()=default;

        Myvector& operator= (const Myvector&); //оператор присваивания
        Myvector& operator= (Myvector&&); //оператор присваивания перемещением

        int Size(){
            return size_;
        };

        int& operator[](std::ptrdiff_t index); //обращение по индексу для изменения
        int operator[](const std::ptrdiff_t index) const;//обращение по индексу для чтения
    private:
        std::unique_ptr<int[]> data_ = nullptr;
        std::ptrdiff_t size_=0;

};

#endif