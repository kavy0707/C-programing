#include <stdio.h>
union student
{
    int id;
    int marks;
    char favchar;
};
void main()
{
    union student s1;

    s1.marks = 40;
    s1.favchar = 'A';
    s1.id = 1;
    printf("student id is = %d", s1);
    printf("\n student marks is = %d", s1);
    printf("\n student favchar is = %c", s1);
}