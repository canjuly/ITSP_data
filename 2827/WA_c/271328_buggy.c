#include<stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2; /*The coordinates of 3 points
                                     and slope of line joining points 1                                      and 2 is m1 and points 2 and 3 is                                      m2*/
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&x3);
    scanf("%f",&y3);
    m1=((y2-y1)/(x2-x1));          //slope of line joining pts 1 and 2
    m2=((y3-y2)/(x3-x2));          //slope of line joining pts 2 and 3
    if(m1==m2)                         
    {
        printf("All the points are on same line"); //slope is same
    }
        else
        {
        printf("All the points are not on same line"); //slope isn't same
        }
    return 0;
}