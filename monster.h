//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    unsigned int hp,potion;
public:
    void Attack(monster &);
          void heal();
    monster(string="lnwza007", int=10,int=1);
    ~monster();
    
};

monster::monster(string a, int h, int p)
{
    name=a;
    h>200? hp=200:hp=h;
    p>10?potion=10: potion=p;

    cout<<"Monster "<<name<<" Has been summon"<<endl;
}

monster::~monster()
{
    cout<< name<<" Has been slain"<<endl;
}

#endif /* monster_h */
