#include <iostream>
#include <stdlib.h>
#include "Boss.h"
#include "Employe.h"



using namespace std;
int main() {
    cout << "Hello, World!" << std::endl;
    Employe employe;

    Boss boss(employe);
    employe.setworking(true);

    return 0;
}
