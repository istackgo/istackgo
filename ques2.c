#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){  // no of lines / rows --> i for reptition
        for(int j=1;j<=n;j++){ // no of columns  --> j 1234
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}