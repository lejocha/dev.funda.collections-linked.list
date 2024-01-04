//
// Created by Equipo 2 on 4/1/2024.
//

#include "Student.h"
//Const sin par
Student::Student(){
id = 0;
name = " ";
carrera = " ";
}
//Const avec par
Student::Student(int p_id, string p_name, string p_carrera ) {
    id=p_id;
    name=p_name;
    carrera=p_carrera;
}
//Destrc
Student::~Student(){}
//Set méts
void Student::setId(int id){

    this->id=id;
    (*this).id=id;
}

void Student::setName(string name){

    this->name=name;
    (*this).name=name;
}

void Student::setCarrera(string carrera){

    this->carrera=carrera;
    (*this).carrera=carrera;
}
//Get méts
int Student::getId() {return id;}
string Student::getName(){return name;}
string Student:: getCarrera(){return carrera;}

};
