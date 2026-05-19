//Write your code in this file
#include <stdio.h>

int main(){
    char names[5][11];
    float average [5];

    int i;
    int j;
    int point;
    int sum;

    float total = 0;
    float group_average;

    int best = 0;

    for (i = 0; i < 5; i++){
        scanf("%s", names[i]);
        sum = 0;
        for (j = 0; j < 13; j++){
            scanf("%d", &point);
            sum = sum + point;
        }
        average[i] = sum / 13.0;
        total = total + average[i];

        if (names[i][0] >= 'a' && names [i][0] <= 'z'){
            names[i][0] = names[i][0] - 32;
        }
    }
    for (i = 1; i < 5; i++){
        if (average[i] > average[best]){
            best = i;
        }
    }
    group_average = total / 5.0;

    printf("%s\n", names[best]);
    for (i = 0; i < 5; i++){
        if (average[i] < group_average){
            printf("%s\n", names[i]);
        }

    }

    return 0;
}

