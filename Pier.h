#ifndef PIER_H
#define PIER_H

class Pier
{
private:


public:
    int id;
    int passengers;
    bool final;
    Pier(int id, bool final);
};

Pier::Pier(int id, bool final): id(id), final(final){}

#endif