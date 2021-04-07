//
// Created by User on 5/4/2021.
//

#ifndef MAIN_CPP_BOSS_H
#define MAIN_CPP_BOSS_H
#include "Employe.h"

class Boss
        {

    public:

        Boss(Employe empleado);

    Boss(const Employe &empleado);

    void Notify();

    private:
        Employe empleado;








};


#endif //MAIN_CPP_BOSS_H
