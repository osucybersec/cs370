#include <stdio.h>

int main() {
    int secret = 0xdeadbeef;
    char name[100] = {0};
    read(0, name, 1000);
    printf("secret: %x\n", secret);
    if (secret == 0x1337) {
        puts("Wow! Here's a secret. cs370_flag{-----------}");
    } else {
        puts("I guess you're not cool enough to see my secret");
    }
}
