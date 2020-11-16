#include <stdio.h>
#include "test.h"

//交换两数的值
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//交换_测试
void swap_test(){
    int a = 10;
    int b = 20;

    printf("交换前：\n");
    printf("a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("\n交换后：\n");
    printf("a=%d, b=%d\n", a, b);
}