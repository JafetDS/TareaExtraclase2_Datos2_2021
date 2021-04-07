//
// Created by Jafet.
//

#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss(const Employe &empleado) : empleado(empleado) {}

void Boss::Notify() {
    if (Boss::empleado.isworking){
        cout<<"I'm working"<<endl;
    }else{
        cout<<"I'm not working"<<endl;
    }
}





