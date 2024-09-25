//
//  task_6.cpp
//  programing_course_part_one
//
//  Created by macbook pro on 25.09.2024.
//

#include "task_6.hpp"
#include <iostream>
#include <string>

using namespace std;

int task_6(){
    
    int num1, num2, num3, num4, num5;
    
    cout << "Enter numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    int max_num = max({num1, num2, num3, num4, num5});
    int min_num = min({num1, num2, num3, num4, num5});
    
    
    cout << "Min numb: " << min_num << endl;
    cout << "Max numb: " << max_num << endl;
    
    return 0;
}

using namespace std;
