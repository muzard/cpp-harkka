#include "monster.h"

int main()
{
    Monster torg {ogre, "Torg", 145};
    Monster blurp {slime, "Blurp", 23};

    printMonster(torg);
    printMonster(blurp);

    return 0;
}
