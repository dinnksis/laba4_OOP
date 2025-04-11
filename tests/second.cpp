#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <list>
#include <set>


template <typename T>
void Myswap(T& a, T& b){
    T c=std::move(a);
    a=std::move(b);
    b=std::move(c);
}



template <typename T>
std::string cotnainer_to_string(T& cont){
    std::ostringstream ostring;
    bool first=true;
    for (auto znach: cont){
        if (!first){
            ostring<<',';
        }
        first=false;
        ostring<<znach;
        
    }
    return ostring.str();
}

int main(){
    //Myswap
    std::cout<<"Myswap:"<<std::endl;
    int a=5,b=55;
    std::cout<<"int"<<std::endl;
    std::cout<<"cif: "<<a<<" "<<b<<std::endl;
    Myswap(a,b);
    std::cout<<"after_swap: "<<a<<" "<<b<<std::endl;

    int e=6.120293,f=1.22222;
    std::cout<<"double"<<std::endl;
    std::cout<<"cif:"<<e<<" "<<f<<std::endl;
    Myswap(e,f);
    std::cout<<"after_swap:"<<e<<" "<<f<<std::endl;

    std::string c="yes",d="no";
    std::cout<<"string"<<std::endl;
    std::cout<<"str:"<<c<<" "<<d<<std::endl;
    Myswap(c,d);
    std::cout<<"after_swap:"<<c<<" "<<d<<std::endl;

    //container_to_string
    std::cout<<"container_to_string"<<std::endl;
    std::vector <int> vec1 ={1,2,3,4,1,2,3,4};
    std::cout<<"vec1: "<<cotnainer_to_string(vec1)<<std::endl;

    std::vector <std::string> vec2 ={"hello","how","are","you","??"};
    std::cout<<"vec2: "<<cotnainer_to_string(vec2)<<std::endl;

    std::list <double> list ={1.20202,3000.222,604.21,13.222};
    std::cout<<"list: "<<cotnainer_to_string(list)<<std::endl;

    std::set <std::string> set = {"I","am","from","set"};
    std::cout<<"set: "<<cotnainer_to_string(set)<<std::endl;

}