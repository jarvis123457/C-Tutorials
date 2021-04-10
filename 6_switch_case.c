#include <stdio.h>
int main() {
    int rating;
    printf("Enter you rating from 1 to 5\n");
    scanf("%d", &rating);
    // Switch requires an integer argument
    switch(rating){
        case 1:
            printf("Your rating is 1\n");
            break;
        case 2:
            printf("Your rating is 2\n");
            break;
        case 3:
            printf("Your rating is 3\n");
            break;
        case 4:
            printf("Your rating is 4\n");
            break;
        case 5:
            printf("Your rating is 5\n");
            break;
        default:
            printf("Your rating is invalid\n");
            break;
    }
    //When break is not applied and let's say you enter 3 then it prints for all 3, 4, 5, and invalid statement because its condition matches there. Char values can also be used as they can be easily evaluated to an integer.
    /*----------------------------------------------------------------------------------------------------*/
    // Quick quiz: Write a program to find grade of a student given his marks based on usual grading requirements.
    
    return 0;
}
