#include "smart_array.h"
#include <chrono>

int main(){
    auto start_time = std::chrono::steady_clock::now();
    delete new int(1);




    smart_array array = smart_array(10);
    for (int i = 0; i < 40000; i++){
        array.push_back(i);
    }




    auto end_time = std::chrono::steady_clock::now();
    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);
    std::cout << elapsed_ns.count() << " ns\n";
    return 0;
}