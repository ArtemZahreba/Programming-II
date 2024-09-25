//
//  task_4.cpp
//  programing_course_part_one
//
//  Created by macbook pro on 25.09.2024.
//

#include "task_4.hpp"
#include <string>
#include <iostream>

using namespace std;

int raising_to_degree(int num, int degree);

int task_4() {
    
    cout << "Number" << "\t" << "Square" << "\t" << "Cube" << endl;
    
    for (int i = 0; i <= 10; i++ ){
        cout << i << "\t\t" << raising_to_degree(i, 2) << "\t\t" << raising_to_degree(i, 3) << endl;
    }
    
    return 0;
}


int raising_to_degree(int num, int degree){
    
    int result = 1;
    
    
    for (int i = 0; i < degree; i++ ){
        result*=num;
    }
    
    return result;
}

