//
// Created by User on 5/4/2021.
//

#ifndef MAIN_CPP_EMPLOYE_H
#define MAIN_CPP_EMPLOYE_H
#pragma once
#include <string>
#include "Boss.h"


class  Employe {



    public:

        Employe(string name);

        string name;
        Boss boss;
        bool working;
        bool isworking();
        void setworking(bool working);
        void tell_boss();
        void setBoss(Boss boss);












};


#endif //EMPLOYE_H
