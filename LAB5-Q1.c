#include <stdio.h>
int main(){
    float AI_Marks, Maths_Marks, Programming_Marks, Attendence, Avg;

    printf("Enter Marks for AI: ");
    scanf("%f", &AI_Marks);

    printf("Enter Maths Marks: ");
    scanf("%f", &Maths_Marks);

    printf("Enter Programming Marks: ");
    scanf("%f", &Programming_Marks);

    printf("Enter Attendance: ");
    scanf("%f", &Attendence);

    if (Attendence >= 75){
        if ((AI_Marks >= 50) && (Programming_Marks >= 50) && (Maths_Marks >= 50)){
            Avg = ((AI_Marks + Maths_Marks + Programming_Marks)/3);
            if (Avg >= 80){
                printf("Excellent!");
            }
            else if (Avg >= 70){
                printf("Very Good.");
            }
            else if (Avg >= 60){
                printf("Good.");
            }
            else {
                printf("Satisfactory.");
            }
        }
        else { 
                printf("Poor..");
            }
    }
    else{
        printf("Student not Eligible.");
    }
}