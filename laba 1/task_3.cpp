//
//  task_3.cpp
//  programing_course_part_one
//
//  Created by macbook pro on 25.09.2024.
//

#include "task_3.hpp"
#include <string>
#include <iostream>

using namespace std;

int task_3(){
    /*
     Enter a five-digit number, divide the number into
     separate digits, and prints them separately with three spaces between them.
     
     return 0;
     */
    
    
    int num;
    
    int first, second, third, fourth, fifth;
    
    cout << "Enter the number: ";
    cin >> num;
    
    first = num / 10000;
    second = (num / 1000) % 10;
    third = (num / 100) % 10;
    fourth = (num / 10) % 10;
    fifth = num % 10;
    
    for (int i: {first, second, third, fourth, fifth}) {
        cout << i << "   ";
    }
    
    cout << endl;
    
    return 0;
}

