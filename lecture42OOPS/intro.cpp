#include <iostream>
#include <string.h>
using namespace std;

class hero
{

    // properties
    // char name[100];
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // default constructor
    hero()
    {
        cout << "Default Constructor Called " << endl;
        name = new char[100];
    }

    // parameterised constructor
    hero(int health)
    {
        this->health = health;
    }

    // copy constructor
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy Constructor Called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    //destructor
    ~hero()
    {
        cout << "Destructor bhai called" << endl;
    }
};
    int hero::timeToComplete = 5;

int main()
{

    cout<<hero::timeToComplete<<endl;
    cout<<hero::random()<<endl;




    // // static
    // hero a;

    // // dynamic
    // hero *b = new hero();
    // delete b;

    // hero hero1;

    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="Bhavya";
    // hero1.setName(name);
    // //hero1.print();

    // //use default copt constructor
    // hero hero2(hero1);
    // //hero2.print();
    // // hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1=hero2;
    // hero1.print();

    // hero2.print();

    // //object created statically
    // hero ramesh(10);
    // // cout<<"Address of Ramesh "<<&ramesh<<endl;

    // ramesh.print();

    // //object created dynamically

    // hero *h = new hero(11);
    // h->print();

    // hero temp(22, 'B');
    // temp.print();

    // // dynamic allocation
    // hero *b = new hero;

    // b->setLevel('A');
    // b->setHealth(70);

    // cout << "level " << (*b).level << endl;
    // cout << "height " << (*b).getHealth() << endl;

    // cout << "level " << b->level << endl;
    // cout << "height " << b->getHealth() << endl;

    // // static allocation
    // hero a;

    // a.setHealth(80);
    // a.setLevel('B');

    // cout << "level " << a.level << endl;
    // cout << "height " << a.getHealth() << endl;

    // //creation ofsss objects
    // hero Ramesh;
    // cout<<"Size of Ramesh "<<sizeof(Ramesh)<<endl;

    // cout<<"ramesh health is "<<Ramesh.getHealth()<<endl;
    // // Ramesh.setHealth(70);

    // //Ramesh.health = 70;
    // Ramesh.level = 'A';

    // cout<<"health is "<<Ramesh.getHealth()<<endl;
    // cout<<"level is "<<Ramesh.level<<endl;

    // // cout<<"Size: "<<sizeof(h1)<<endl;

    return 0;
}