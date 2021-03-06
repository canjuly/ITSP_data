/*numPass=0, numTotal=6
Verdict:WRONG_ANSWER, Visibility:1, Input:"4", ExpOutput:"1 1 1 1 
2 1 1 
2 2 
3 1 
4 
", Output:"1 1 1 1 0 
2 1 1 1 
2 2 1 
3 1 1 
4 3 
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"5", ExpOutput:"1 1 1 1 1 
2 1 1 1 
2 2 1 
3 1 1 
3 2 
4 1 
5 
", Output:"1 1 1 1 1 0 
2 1 1 1 1 
2 2 1 1 
3 1 1 1 
3 2 1 
4 1 1 
5 4 
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"2", ExpOutput:"1 1 
2 
", Output:"1 1 0 
2 1 
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"1", ExpOutput:"1 
", Output:"1 0 
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"6", ExpOutput:"1 1 1 1 1 1 
2 1 1 1 1 
2 2 1 1 
2 2 2 
3 1 1 1 
3 2 1 
3 3 
4 1 1 
4 2 
5 1 
6 
", Output:"1 1 1 1 1 1 132145 
2 1 1 1 1 1 
2 2 1 1 1 
2 2 2 1 
3 1 1 1 1 
3 2 1 1 
3 3 2 
4 1 1 1 
4 2 1 
5 1 1 
6 5 
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"9", ExpOutput:"1 1 1 1 1 1 1 1 1 
2 1 1 1 1 1 1 1 
2 2 1 1 1 1 1 
2 2 2 1 1 1 
2 2 2 2 1 
3 1 1 1 1 1 1 
3 2 1 1 1 1 
3 2 2 1 1 
3 2 2 2 
3 3 1 1 1 
3 3 2 1 
3 3 3 
4 1 1 1 1 1 
4 2 1 1 1 
4 2 2 1 
4 3 1 1 
4 3 2 
4 4 1 
5 1 1 1 1 
5 2 1 1 
5 2 2 
5 3 1 
5 4 
6 1 1 1 
6 2 1 
6 3 
7 1 1 
7 2 
8 1 
9 
", Output:"1 1 1 1 1 1 1 1 1 0 
2 1 1 1 1 1 1 1 1 
2 2 1 1 1 1 1 1 
2 2 2 1 1 1 1 
2 2 2 2 1 1 
3 1 1 1 1 1 1 1 
3 2 1 1 1 1 1 
3 2 2 1 1 1 
3 2 2 2 1 
3 3 1 1 1 1 
3 3 2 1 1 
3 3 3 2 
4 1 1 1 1 1 1 
4 2 1 1 1 1 
4 2 2 1 1 
4 3 1 1 1 
4 3 2 1 
4 4 1 1 
5 1 1 1 1 1 
5 2 1 1 1 
5 2 2 1 
5 3 1 1 
5 4 3 
6 1 1 1 1 
6 2 1 1 
6 3 2 
7 1 1 1 
7 2 1 
8 1 1 
9 8 
"
*/
#include <stdio.h>
#include <stdlib.h>
    int n;
void print_seq(int*p,int place,int sum_p)
{
    if(sum_p==n)
    {
        for(int i=0;i<=place;i++)
        {
            printf("%d ",p[i]);
        }
        printf("\n");
        return;
    }
    if(sum_p>n)
    {
        return;
    }
    else
    {
        if(place==0)
        {
            for(int i=1;i<=n;i++)//p[0] ranges from 1 to n
            {
                p[place]=i;
                print_seq(p,place+1,sum_p+p[place]);
            }
        }
        if(place)
        {
            for(int j=1;j<=p[place-1];j++)
            {
                p[place]=j;
                print_seq(p,place+1,sum_p+p[place]);
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    int*a;
    a=(int*)malloc(n*sizeof(int));//array of size n 
    print_seq(a,0,0);
	return 0;
}