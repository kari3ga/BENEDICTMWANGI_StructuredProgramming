#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.14;
          float r, s_area;

    printf("Enter radius of sphere\n");
    scanf("%f", &r);

    s_area = ( 4 * PI * r * r);

    printf("Surface Area of the sphere is %f\n", s_area);
    return 0;
}
