//
//  task_2.cpp
//  programing_course_part_one
//
//  Created by macbook pro on 25.09.2024.
//

#include "task_2.hpp"
#include <iostream>
#include <string>

using namespace std;

int task_2() {
    /*
     thish func print (
                        rhombus
                        arrow
                        circle
                        square
                       )
     
     return 0;
     */
    
    cout << R"(
    Square:         Circle:           Arrow:        Rhombus:
    *********           ******              *             *
    *       *         **      **           ***           * *
    *       *       *            *        *****         *   *
    *       *      *              *      *******       *     *
    *       *      *              *     *********     *       *
    *       *      *              *         *          *     *
    *       *       *            *          *           *   *
    *       *         **      **            *            * *
    *********           ******              *             *
    )" << endl;
    
    cout << endl;
    
    return 0;
}



