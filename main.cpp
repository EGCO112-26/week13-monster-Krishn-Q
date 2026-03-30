//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("tungtungtungsahur",10,1);
    monster m2("Lebron",100),m4("verstappen", 30);
    monster m3;

    monster x[5]={{"Anuthin",95,6},{"E20",36,10}};

    p=new monster("Lulu",10,50);
    delete p;

    return 0;
}
