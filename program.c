#include <stdio.h>

int main(int argc, char** argv) {
    __uint16_t polje[6];
    char* pointer;
    pointer = (char*)&polje;

    char s = 'S';
    char p = 'P';
    char o = 'O';
    float pi = 3.141592;
    __uint32_t vpisna_st = 1002368260;
    char k = '!';

    // polje size: 12
    // char: 1
    // float: 4
    // uint32: 4
    
    //printf("size of polje: %d\n", sizeof(polje));
    //printf("size of char: %d\n", sizeof(char));
    //printf("size of float: %d\n", sizeof(float));
    //printf("size of uint32: %d\n", sizeof(__uint32_t));


    *(char*)&pointer[0] = s;
    *(char*)&pointer[1] = p;
    *(char*)&pointer[2] = o;
    *(float*)&pointer[3] = pi;
    *(__uint32_t*)&pointer[7] = vpisna_st;
    *(char*)&pointer[11] = k;

    printf("%c\n", *(char*)&pointer[0]);
    printf("%c\n", *(char*)&pointer[1]);
    printf("%c\n", *(char*)&pointer[2]);
    printf("%f\n", *(float*)&pointer[3]);
    printf("%d\n", *(__uint32_t*)&pointer[7]);
    printf("%c\n", *(char*)&pointer[11]);



    return 0;
}