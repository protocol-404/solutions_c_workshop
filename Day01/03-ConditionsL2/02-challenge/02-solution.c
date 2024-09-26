
#include <stdio.h>

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_CYAN "\x1b[36m"

int main() {
    int age, typeCar, nbrAcc;

    printf(COLOR_RED "_____ _____  _  __  __  ____     ____    ____    ____   ____  __ __ _____   ____   __  _  ____  ____      ____  __ __  _____  ____  \n" COLOR_RED);
    printf(COLOR_RED "| ()_)| () )| ||  \\/  || ===|   | _) \\  / () \\  (_ (_` (_ (_`|  |  || () ) / () \\ |  \\| |/ (__`| ===|    / () \\|  |  ||_   _|/ () \\ \n" COLOR_RED);
    printf(COLOR_RED "|_|   |_|\\_\\|_||_|\\/|_||____|   |____/ /__/\\__\\.__)__).__)__) \\___/ |_|\\_\\/__/\\__\\|_|\\__|\\____)|____|   /__/\\__\\___/   |_|  \\____/\n" COLOR_RED);
    printf(COLOR_RED "                                                                                                                                                \n" COLOR_RED); 

    printf(COLOR_YELLOW"enter your age: "COLOR_YELLOW);
    scanf("%d", &age);

    printf(COLOR_YELLOW" ↓ enter your car type ↓ \n"COLOR_YELLOW);
    printf(COLOR_YELLOW"1- sport car\n"COLOR_YELLOW);
    printf(COLOR_YELLOW"2- utility car\n"COLOR_YELLOW);
    printf(COLOR_YELLOW"3- family car\n"COLOR_YELLOW);

    printf(COLOR_GREEN"your choice ==> "COLOR_GREEN);
    scanf("%d", &typeCar);

    float primeBase;
    
    printf(COLOR_YELLOW"enter prime base: "COLOR_YELLOW);
    scanf("%f", &primeBase);

    printf(COLOR_YELLOW"enter nbr of accidents: "COLOR_YELLOW);
    scanf("%d", &nbrAcc);

    if (age < 25) {
        primeBase *= 1.5;
    } else if (age > 65) {
        primeBase *= 1.2;
    } else {
        primeBase *= 1;
    }

    switch (typeCar) {
        case 1:
            primeBase *= 2;
            break;
        case 2:
            primeBase *= 1.2;
            break;
        case 3:
            primeBase *= 1.1;
            break;
        default:
            printf("invalid car type.\n");
            return -1;
    }

    if (nbrAcc > 1) {
        primeBase *= 1.3;
    }

    printf(COLOR_CYAN"prime is |==> %.2f < ==|\n" COLOR_CYAN, primeBase);

    return 0;
}
