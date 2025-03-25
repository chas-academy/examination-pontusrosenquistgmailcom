//Write your code in this file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main(){

    char top_student[10];
    int best_score;

    for(int i = 0; i<5; i++){

    // initialize variables
        char szName[256];
        int grade_score[13];
        int total_grade_score = 0;
    //read input name
        scanf("%s", szName);
    //read input grade scores
        for(int i=0; i<13; i++){
            scanf("%d", &grade_score[i]);
        }
    //check name length is less than 11
        if(strlen(szName) > 10 || strlen(szName) < 0){
            printf("The name \"%s\" is too long or too short (0 - 10 characters)", szName);
            return 0;
        }
    //check and change first letter in name to uppercase
        if (islower(szName[0])){
            szName[0] = (toupper(szName[0]));
        }

        printf("%s ", szName);
        for(int i = 0; i< 13; i++){
            printf("%d ", grade_score[i]);
        }
    // sum grade score and 
        for (int i = 0; i<13; i++){
            total_grade_score += grade_score[i];
        }
        printf("\n%d %.5f\n", total_grade_score, total_grade_score/13.00000);
    }
    return 0;
}
