//
//  task_1.cpp
//  programing_course_part_one
//
//  Created by macbook pro on 25.09.2024.
//

#include "task_1.hpp"
#include <iostream>
#include <string>

using namespace std;


int task_1() {
    /*
     enters three integers from the keyboard and prints
     the sum, average, product, lesser and greater of these numbers
     
     return 0;
    */
    
    int num_1, num_2, num_3;
    
    
    std::cout << "Enter the numbers: " ;
    std::cin >> num_1 >> num_2 >> num_3;
    
    int suma = num_1 + num_2 + num_3;
    double average = suma / 3;
    int product = num_1 * num_2 * num_3;
    int min_num = min({num_1, num_2, num_3});
    int max_num = max({num_1, num_2, num_3});
    
    cout << "The sum is equal to: " << suma << endl;
    cout << "Average value: " << average << endl;
    cout << "The product of all numbers: " << product << endl;
    cout << "Minimum number: " << min_num << endl;
    cout << "Maximum number: " << max_num << endl;
    
    return 0;
}

