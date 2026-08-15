#include <stdio.h>
#include <string.h>

int main() {

    //Declare variables

    char student_name[50];
    char course[50];
    int roll_no;
    float attendance;
    int internal_marks;

    
    //Accept all required student details

    printf("Enter Student Name(eg: Liyaan): ");
    scanf("%s", &student_name);

    printf("Enter Year & Course(eg: FYBSCIT): ");
    scanf("%s", &course);


    //Check for valid roll number and promt again in invalid, using do-while loop
    do {
        printf("Enter Roll Number: ");
        scanf("%d", &roll_no);

        if(roll_no <= 0){
            printf("Error -> Invalid Roll Number. Please enter a valid roll number\n");
        }
    } while(roll_no<=0);


    //Attendance should be valid(between 0 and 100), verifying for valid attendance using a do-while loop
    
    do {
        printf("Enter Attendance Percentage: ");
        scanf("%f", &attendance);

        if(attendance < 0 || attendance > 100) {
            printf("Error -> Invalid Attendance. Please enter a value between 0 and 100\n");
        }
    } while (attendance < 0 || attendance > 100);


    //Internal assessment marks should be valid(between 0 and 30), verifying for valid marks using a do-while loop

    do {
        printf("Enter Internal Assessment Marks: ");
        scanf("%d", &internal_marks);

        if(internal_marks < 0 || internal_marks > 30){
            printf("Error -> Invalid Marks. Please enter a value between 0 and 30\n");
        }
    } while(internal_marks < 0 || internal_marks > 30);


    //Online Exam Eligibility. Verifying attendance percentage and internal assessment marks for eligibility
    
    printf("\n =====================================================================\n");
    printf("|                   Online Exam Eligibility Portal                    |");
    printf("\n|=====================================================================|\n");
    printf("|                      End Semester Examination                       |");
    printf("\n|---------------------------------------------------------------------|\n");


    //Display student details

    printf("| Student Name: %-53s |\n", student_name);
    printf("| Roll Number: %-54d |\n", roll_no);
    printf("| Course: %-59s |\n", course);
    printf("|                                                                     |\n");


    //A student is eligible ONLY if attendance>=75 AND marks>=20

    if(attendance >= 75 && internal_marks >= 20){
        //Display eligibility status
        printf("| Status: Eligible                                                    |\n");
        printf("|                                                                     |\n");
        printf("| Atendance: %-56.1f |\n", attendance);
        printf("| Internal Assessment Marks: %-40d |\n", internal_marks);
    }
    else{
        //Display ineligiility status
        printf("| Status: NOT Eligible                                                |\n");
        printf("|                                                                     |\n");
        printf("| Reason(s) for ineligibility:                                        |\n");

        //Display ineligibility reason(s)
        if(attendance < 75) {
            printf("| - 75%% Attendance requirement not met | Current: %-19.1f |\n", attendance);
        }

        if(internal_marks < 20) {
            printf("| - 20/30 Internal assessment marks requirement not met | Current: %-2d |\n", internal_marks);
        }
    }
    printf("|                                                                     |\n");
    printf("| Thank you!                                                          |");
    printf("\n ---------------------------------------------------------------------\n");


    return 0;
}