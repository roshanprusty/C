#include <stdio.h>
typedef struct rollno
{
    int r1;
    int r2;

} rn;
int main()
{
    rn r;
    rn *rno = &r;

    rno->r1 = 18; // (*rno).r1 = 18;
    rno->r2 = 21; //(*rno).r2 = 21;

    printf("%d\n",rno->r1);  // printf("%d",(*rno).r1);
    printf("%d\n",rno->r2);  //printf("%d",(*rno).r2);



    return 0;
}