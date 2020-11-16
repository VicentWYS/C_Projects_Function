#include <stdio.h>
#include "test.h"

int a[] = {1,2,3};

int fun1(){
    return a[0] + a[1] +a[2];
}

int fun2(){
    return a[0] * a[1] * a[2];
}

void doWork(int (*p)()){
    printf("本次计算结果为:%d\n", (*p)());
}

//指针与函数
int main() {

    ////交换_测试
    //swap_test();

    //printf("main函数的地址为：%p\n", main);


    //指向函数的指针
    doWork(fun1);

    printf("\n");

    doWork(fun2);

    return 0;
}
