/*
 * helloworld.c
 * This program prints "Hello World" a specified number of times.
 *
 * Usage: ./helloworld <num_times>
 * Example: ./helloworld 3
 * Output:
 * Hello World
 * Hello World
 * Hello World
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int amount;
    printf("How many times would you like to say Hello World:");
    scanf("%i", &amount);

    for(int i = 0; i < amount; i++){
       printf("Hello World\n");
    }

    return 0;
}

