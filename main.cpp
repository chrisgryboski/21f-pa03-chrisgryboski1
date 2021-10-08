#include <iostream>
#include <chrono>
#include "include/sorting_library.h"


int main() {

//make some data to sort
//    int sorted[75000];
//    for(int i=0; i<75000; i++){
//        sorted[i]= rand()*75000;
//    }
//    int saved[75000];
//    for(int i=0; i<75000; i++){
//        saved[i]= sorted[i];
//    }
for(int i=0; i<20; i++) {
    int sorted[75000];
    for(int j=0; j<75000; j++){
        sorted[j]= rand()*75000;
    }
//    int count = 0;
//    for (int z = 75000; z > 0; z--) {
//        sorted[count] = z;
//        count++;
//    }
//}
//    for(int i=0; i<75000; i++){
//        std::cout<<sorted[i]<<std::endl;
//    }


    int trial = 20;

    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
  //  print_version_number();
//create a start and end time_point object
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

   // std::cout << "MYSTERY SORT 1" << std::endl;
//print the trial number
//  std::cout << "Trial: " << j + 1 << std::endl;


//get the current time, run the algo, then get the current time again
    start = std::chrono::high_resolution_clock::now();
    mystery05(sorted, 75000);
    end = std::chrono::high_resolution_clock::now();
//calculate the duration between start and end and print to the terminal
    std::chrono::duration<double> time_in_seconds = end - start;
    std::cout << std::fixed << time_in_seconds.count() << std::endl;
  //  std::cout << std::endl << std::endl;
}
//        start = std::chrono::high_resolution_clock::now();
//        mystery02(sorted, 50000);
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds1 = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds1.count() << std::endl;
//
//        start = std::chrono::high_resolution_clock::now();
//        mystery03(sorted, 50000);
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds2 = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds2.count() << std::endl;
//
//        start = std::chrono::high_resolution_clock::now();
//        mystery04(sorted, 50000);
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds3 = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds3.count() << std::endl;
//
//        start = std::chrono::high_resolution_clock::now();
//        mystery05(sorted, 50000);
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds4 = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds4.count() << std::endl;



    return 0;
}
