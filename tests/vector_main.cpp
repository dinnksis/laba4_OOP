#include <chrono>
#include <iostream>
#include <vector.hpp>


int main(){
    std::ptrdiff_t size=100000000;

    Myvector a(size);
    Myvector copy_proverka(size);
    Myvector move_provreka(size);
    
    for (int i=0;i<size;i++){
        a[i]=i;
    }

    //копирование
    auto start_copy=std::chrono::high_resolution_clock::now();
    copy_proverka=a;
    auto end_copy=std::chrono::high_resolution_clock::now();
    std::chrono::duration <double> diff_copy=end_copy-start_copy;
    std::cout<<"copy_time:"<<diff_copy.count()<<std::endl;

    //перемещение
    auto start_move=std::chrono::high_resolution_clock::now();
    move_provreka=std::move(a);
    auto end_move=std::chrono::high_resolution_clock::now();
    std::chrono::duration <double> diff_move=end_move-start_move;
    std::cout<<"move_time:"<<diff_move.count();
}