#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    repeat(2)
        gauche();
    printf("Bonjour, laissez-moi vous aider\n");
    ramasser();
    repeat(32)
        droite();
    deposer();
    return (0);
}
