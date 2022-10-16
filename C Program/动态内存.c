# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>

int main(){

    int *a;

    a = (int*)malloc(200*sizeof(int));
    *a = 156;
    // printf("%d",sizeof(*a));
    printf("%d\n",*a);
    printf("%d\n",_msize(a));
    a = realloc(a,500*sizeof(int));
    printf("%d\n",_msize(a));
    free(a);
    printf("%d",*a);

    system("pause");
    return 0;
}