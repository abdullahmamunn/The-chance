#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100];
    gets(str);
    printf("%d\n",atoi(str));
    return 0;
}
