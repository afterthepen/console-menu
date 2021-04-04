#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Console Menu Demo in C\n");
    int m = 0;

    while(m < 4){
        printf("\n0 - Print Hello World!\n");
        printf("1 - Print Happy Birthday!\n");
        printf("2 - Print Happy Valentines Day!\n");
        printf("3 - There is No Spoon\n");
        printf("4 and up - Exit Program\n\n");

        printf("Enter Choice: ");
        scanf("%d", &m);

        if (m < 0){
            printf("--> Input must be 0 or a positive value.\n");
        }else{
            switch(m){
                case 0:
                    printf("--> Hello World!\n");
                break;

                case 1:
                    printf("--> Happy Birthday!\n");
                break;

                case 2:
                    printf("--> Happy Valentines Day!\n");
                break;

                case 3:
                    printf("--> No Spoon!\n");
                break;
            }
        }


    }
    return 0;
}
