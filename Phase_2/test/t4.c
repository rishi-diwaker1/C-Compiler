#include<stdio.h>

int main() {
    int i = 0;

    do {
        printf("Hey");
        i++;
    } while (i < 5);

    ++i;

    int j = 7;

    while (i < 5 && j < 6);

    for (int a = 0, b = 0; a < 5; ++a);

    for (a = 0; a < 5 && b < 6; a++);

    for (a = 0; a < 5; a++, b++, ++c);
}