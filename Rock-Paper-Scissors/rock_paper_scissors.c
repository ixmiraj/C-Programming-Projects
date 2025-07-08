#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Options
    int n;
    printf("[Choose one]\n");
    printf(" 1. Rock\n");
    printf(" 2. Paper\n");
    printf(" 3. Scissor\n");
    printf("-> ");
    scanf("%d",&n);

    printf("\n");
    // Show Input
    switch (n)
    {
    case 1:
        printf("YOU - Rock\n");
        break;
    case 2:
        printf("YOU - Paper\n");
        break;
    case 3:
        printf("YOU - Scissor\n");
        break;
    default:
        break;
    }

    // Random Number Generate
    srand(time(0));
    int random = rand() % 3 + 1;

    // Computer Play
    switch (random)
    {
    case 1:
        printf("CMP - Rock\n");
        break;
    case 2:
        printf("CMP - Paper\n");
        break;
    case 3:
        printf("CMP - Scissor\n");
        break;
    default:
        break;
    }

    // Compare
    if (n == random) {
        printf("Draw round!");
    } else if (n == 1 && random == 3) {
        printf("Won!\n");
    } else if (n == 2 && random == 1) {
        printf("Won!\n");
    } else if (n == 3 && random == 2) {
        printf("Won!\n");
    }else {
        printf("Lost\n");
    }

    return 0;
}
