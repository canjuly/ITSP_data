/*numPass=4, numTotal=4
Verdict:ACCEPTED, Visibility:1, Input:"12
Hello World", ExpOutput:"dlroW olleH

", Output:"dlroW olleH"
Verdict:ACCEPTED, Visibility:1, Input:"14
baL noisruceR", ExpOutput:"Recursion Lab

", Output:"Recursion Lab"
Verdict:ACCEPTED, Visibility:0, Input:"44
The quick brown fox jumps over the lazy dog", ExpOutput:"god yzal eht revo spmuj xof nworb kciuq ehT

", Output:"god yzal eht revo spmuj xof nworb kciuq ehT"
Verdict:ACCEPTED, Visibility:0, Input:"65
esuoh sybstaG rof yaw edam dah taht seert eht seert dehsinav stI", ExpOutput:"Its vanished trees the trees that had made way for Gatsbys house

", Output:"Its vanished trees the trees that had made way for Gatsbys house"
*/
#include <stdio.h>
#include <string.h>

void rev(char str[100],int n)
{
    printf("%c",str[n]);
    if(n>0)
    {
        n=n-1;
        rev(str,n);
    }
}
int main()
{
    /* Use Recursive Function to solve the problem*/
    char s[100],ch;int n,i,c;
    scanf("%d\n",&n);
    scanf("%c",&ch);
    for(i=0;i<n-1;i++)
    {
        s[i]=ch;
        scanf("%c",&ch);
    }
    s[n-1]='\0';
    rev(s,n-2);
    return 0;
}