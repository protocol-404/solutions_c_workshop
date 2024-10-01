#include "main.h"

void display_title() {
    printf("\033[0;32m");
    printf("\n");
    printf(" _      _ _             _____                _    \n");
    printf("| |    (_) |           |_   _|              | |   \n");
    printf("| |     _| |__  _ __ __ _| |  _ __ __ _  ___| | __\n");
    printf("| |    | | '_ \\| '__/ _` | | | '__/ _` |/ __| |/ /\n");
    printf("| |____| | |_) | | | (_| | | | | | (_| | (__|   < \n");
    printf("|______|_|_.__/|_|  \\__,_\\_/ |_|  \\__,_|\\___|_|\\_\\\n");
    printf("                                                  \n");

    printf("\033[1;34m");
    printf("          --Book Inventory System--               \n");

    printf("\033[1;33m");
    printf("          -------------------------               \n");
    printf("          |---- By: Protocol -----|               \n");

    printf("\033[0m");
}