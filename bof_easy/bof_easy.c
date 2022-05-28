#include <stdio.h>

void get_flag() {
    puts("Not bad. cs370_flag{------------}.");
}

int main() {
    int n00b = 0x0;
    char name[100] = {0};
    printf("Hi, What did you say your name was again?\n");
    read(0, name, 0x100);
    printf("Hi %s\n", name);
    return 0;
}
