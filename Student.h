//
// Created by Equipo 2 on 4/1/2024.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H
#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int id;
    string name;
    string carrera;
public:
    student();
    student(int, string, string);
    virtual ~student();

};


#endif //MAIN_STUDENT_H
