//
// Created by User on 11/4/2021.
//

#include "Facade_Generator.h"
#include "Cuadrado.h"
#include "Triangulo.h"
Facade_Shapes Facade_Generator::Generate_Square() {
    return Cuadrado::Generate();
}

Facade_Shapes Facade_Generator::Generate_Triangle() {
    return Triangulo::Generate();
}