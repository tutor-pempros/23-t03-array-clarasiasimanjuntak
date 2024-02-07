// 12S23019_clarasia l. simanjuntak

#include <stdio.h>

int main()
 {
    int num, Min, Max;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);
    
        if (num == 0) {
            break;
        }

        if (i == 0) {
            Min = num;
            Max = num;
        } else
        {
            if (num < Min) {
                Min = num;
            }
            if (num > Max) {
                Max = num;
            }
        }
    }

    printf("%d\n", Min);
    printf("%d\n", Max);

return 0;
}