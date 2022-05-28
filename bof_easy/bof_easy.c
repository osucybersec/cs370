#include <stdio.h>

void get_flag() {
    printf("Not bad. cs370_flag{------------}.\n");
}

void say_hi() {
    int n00b = 0x00;
    char name[100];
    printf("Hi, What did you say your name was again?\n");
    read(0, name, 0x100);

    if (n00b==0x00) {
        printf("Hi n00b!\n");
    } else {
        printf("Hi %s\n", name);
    }
}

int main() {
    say_hi();
    return 0;
}
