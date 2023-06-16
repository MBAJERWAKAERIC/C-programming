#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void main()
{
    int r, erea;
    printf("please enter the radius of the circle");
    scanf("%d", &r);

    erea = PI * (r*r);
    printf("erea of the circle = %d", erea);

}
