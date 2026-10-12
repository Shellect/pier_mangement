#include <random>
#include <cstdio>
#include <unistd.h>

#include "Motorboat.h"
#include "Passenger.h"
#include "Pier.h"

int passengerGenerator()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 5);
    return distrib(gen);
}

class Game
{
public:
    Pier piers[3]{Pier(1, true), Pier(2, false), Pier(3, true)};
    int hours = 6;

    void print()
    {
        printf("\nВремя: %d часов.\n", hours);
        for (size_t i = 0; i < 3; i++)
            printf("Причал №%d: %d пассажиров\n", piers[i].id, piers[i].passengers);
    }

    void run()
    {
        for (; hours < 21; hours++)
        {
            for (auto &pier : piers)
                pier.passengers += passengerGenerator();
            print();
            sleep(2);
        }
    }
};

int main()
{
    Game game;
    game.run();
    return 0;
}