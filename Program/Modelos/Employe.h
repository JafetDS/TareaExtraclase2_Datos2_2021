//
// Created by User on 5/4/2021.
//

#ifndef MAIN_CPP_EMPLOYE_H
#define MAIN_CPP_EMPLOYE_H
#include "Boss.h"


class Employe {



    public:

        Employe();

        Employe(const Boss &boss);

        bool isworking();
        void setworking(bool working);
        void tell_boss();
        void setBoss(Boss boss);
        Boss getBoss();




private:
        bool working;
        Boss boss;






};


#endif //MAIN_CPP_EMPLOYE_H
