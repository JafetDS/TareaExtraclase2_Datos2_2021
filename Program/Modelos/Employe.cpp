//
// Created by Jafet.
//

#include <iostream>


#include "Employe.h"




Employe::Employe(string name) {
        this->name= name;

}


bool Employe::isworking() {
    return this->working;
}

void Employe::setworking(bool working) {
    this->working = working;
    tell_boss();



}

void Employe::tell_boss() {
    this->boss.Notify(working,name);

}

void Employe::setBoss(Boss boss) {
    this->boss = boss;
}

