//
// Created by Jafet.
//

#include <iostream>
#include <string>
#include "Boss.h"




Boss::Boss() {

}



void Boss::Notify(bool Working,string worker) {
    cout<<"simple"<<endl;

   if (Working){
       cout<<worker<<" said,I'm working"<<endl;
   }else{
       cout<<worker<<" said,I'm not working"<<endl;
   }
}

Boss::Boss(int i) {

}

