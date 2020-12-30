// Inline functions
// time header 
// chrono 
// Calculating the time elapsed

#include <iostream>
#include <time.h>
#include <chrono>
#include <unistd.h>

inline int AddNumbers(int a, int b) {
    for (int i = 0; i < 100; i++) {
        continue;
    }
    return (a + b);
}

int main() {

    time_t start_seconds;
    start_seconds = time(NULL);

    auto chrono_start = std::chrono::steady_clock::now();

    int a = 10, b = 20;

    std::cout << "Sum : " << AddNumbers(a, b) << std::endl;

    time_t end_seconds;
    end_seconds = time(NULL);

    auto chrono_end = std::chrono::steady_clock::now();

    std::cout << "Time elapsed in nano seconds : " << std::chrono::duration_cast<std::chrono::nanoseconds>(chrono_end - chrono_start).count() << " ns" << std::endl;
    std::cout << "Time elapsed in nano seconds : " << std::chrono::duration_cast<std::chrono::microseconds>(chrono_end - chrono_start).count() << " micros" << std::endl;
    std::cout << "Time elapsed in nano seconds : " << std::chrono::duration_cast<std::chrono::milliseconds>(chrono_end - chrono_start).count() << " millis" << std::endl;
    std::cout << "Time elapsed in nano seconds : " << std::chrono::duration_cast<std::chrono::seconds>(chrono_end - chrono_start).count() << " s" << std::endl;

    // time_t elapsed_time = end_seconds - start_seconds;
    // std::cout << "Time elapsed : " << elapsed_time << std::endl;    

    auto chrono_high_res_start = std::chrono::high_resolution_clock::now();
    sleep(3.0);
    auto chrono_high_res_end = std::chrono::high_resolution_clock::now();
    std::cout << "Time elapsed high res : " << std::chrono::duration_cast<std::chrono::nanoseconds>(chrono_high_res_end - chrono_high_res_start).count() << std::endl;

    return 0;
}