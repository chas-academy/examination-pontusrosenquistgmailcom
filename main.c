//Write your code in this file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctype.h>
#include <string.h>

char to_upper_case (char a){
    if(a > 90){
        return a -32;
    }
    else{
        return a;
    }
}

int main(){

    char sz_top_student[256];
    int best_score = 0;
    int overal_score = 0;
    char sz_student_names[5][256];
    int student_scores[5];

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

        sz_student_name[0] = to_upper_case(sz_student_name[0]);
    /*check and change first letter in name to uppercase
        if (islower(sz_student_name[0])){
            sz_student_name[0] = (toupper(sz_student_name[0]));
        }
*/

    // sum grade score and check that scores are within 0 - 10
        for (int i = 0; i<13; i++){
            if(grade_score[i] < 11 && grade_score[i] > -1){
                total_grade_score += grade_score[i];
            }
            else{
                printf("student score: %d is too high or too low", grade_score[i]);
                return 0;
            }
        }

    //determin top student name
        if(total_grade_score > best_score){
            best_score = total_grade_score;
            strcpy(sz_top_student, sz_student_name);
        }
    //sum overal total score
        overal_score += total_grade_score;    

    //store individual data
        strcpy(sz_student_names[i], sz_student_name);
        student_scores[i] = total_grade_score;

    }

    //print top student name to console
    printf("%s\n", sz_top_student);
    //print student names to console whose score is lower than average
    for (int i = 0; i <5; i++){
        if (student_scores[i] < overal_score/5){
            printf("%s\n", sz_student_names[i]);
        }
    }

    return 0;
}
