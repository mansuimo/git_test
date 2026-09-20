#include <stdio.h>
#include "cooperation.h"   

int main(){
    char name[] = "Git Learning";

    // 调用 cooperation.cpp 里实现的函数
    printSeparator(30);
    printWelcome(name);
    printf("1 + 2 = %d\n", add(1, 2));
    printSeparator(30);

    return 0;
}
