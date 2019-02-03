#include "../proto/supervisor.h"

// papillon
int main(int argc, char **argv)
{
    srand(time(NULL));
    int idMu = 1;

    // Size is modulable
    int size = 10;

    // GENERATION OF UNIVERS
    struct Land land;
    // printf("%d\n", population->startPopulation->idMu);
    initiateLand(&land, size);
    struct Population *population = initiatePopulation(&land, 11, &idMu, size);

    struct Univers *univers = malloc(sizeof(struct Univers));
    initiateUnivers(univers, 1, idMu, population, &land);

    if (!startGame(univers))
    {
        // printf("\n%d\n", univers->age);

        // printf("%d\n", univers->age);

        // printMu(population->startPopulation);
        // printTile(land.tiles[15][15]);
        freeUnivers(univers);

        // printf("outiout!");
        return 0;
    }
    return 1;
}