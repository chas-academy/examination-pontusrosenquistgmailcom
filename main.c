//Write your code in this file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main(){

    char sz_top_student[55];
    int best_score = 0;
    int overal_score = 0;


    for(int i = 0; i<5; i++){

    // initialize variables
        char sz_student_name[256];
        int grade_score[13];
        int total_grade_score = 0;
    //read input name
        scanf("%s", sz_student_name);
    //read input grade scores
        for(int i=0; i<13; i++){
            scanf("%d", &grade_score[i]);
        }
    //check name length is less than 11
        if(strlen(sz_student_name) > 10 || strlen(sz_student_name) < 0){
            printf("The name \"%s\" is too long or too short (0 - 10 characters)", sz_student_name);
            return 0;
        }
    //check and change first letter in name to uppercase
        if (islower(sz_student_name[0])){
            sz_student_name[0] = (toupper(sz_student_name[0]));
        }


    // sum grade score and 
        for (int i = 0; i<13; i++){
            total_grade_score += grade_score[i];
        }

    //determin top student name
        if(total_grade_score > best_score){
            best_score = total_grade_score;
            strcpy(sz_top_student, sz_student_name);
        }
    //sum overal total score
        overal_score += total_grade_score;    



    }

    printf("%s\n", sz_top_student);
    

    return 0;
}
