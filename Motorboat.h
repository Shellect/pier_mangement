#ifndef MOTORBOAT_H
#define MOTORBOAT_H

class Motorboat
{
private:
    int id;
    int pierId;

public:
    int seats;
    Motorboat(int seats_) : seats(seats_){}
};

#endif