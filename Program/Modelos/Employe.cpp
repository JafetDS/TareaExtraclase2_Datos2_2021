//
// Created by Jafet.
//

#include "Employe.h"
#include <iostream>
using namespace std;



Employe::Employe() {}
Employe::Employe(const Boss &boss) : boss(boss) {}

Boss Employe::getBoss(){
    return this->boss;
}

bool Employe::isworking() {
    return this->working;
}

void Employe::setworking(bool working) {
    Employe::working = working;
    Employe::tell_boss();

}

void Employe::tell_boss() {
    Employe::boss.Notify();
}

void Employe::setBoss(Boss boss) {
    Employe::boss = boss;
}



