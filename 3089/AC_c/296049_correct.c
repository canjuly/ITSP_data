/*numPass=9, numTotal=9
Verdict:ACCEPTED, Visibility:1, Input:"abcxy 
b 
hi", ExpOutput:"ahibcxy", Output:"ahibcxy"
Verdict:ACCEPTED, Visibility:1, Input:"jhggd 
g 
sdfghjk", ExpOutput:"jhsdfghjkggd", Output:"jhsdfghjkggd"
Verdict:ACCEPTED, Visibility:1, Input:"dfghj 
j 
cvb", ExpOutput:"dfghcvbj", Output:"dfghcvbj"
Verdict:ACCEPTED, Visibility:1, Input:"d 
d 
asdfg", ExpOutput:"asdfgd", Output:"asdfgd"
Verdict:ACCEPTED, Visibility:1, Input:"Thisproblemhasnoautomatedtestcases.
.
----isn'tit?", ExpOutput:"Thisproblemhasnoautomatedtestcases----isn'tit?.", Output:"Thisproblemhasnoautomatedtestcases----isn'tit?."
Verdict:ACCEPTED, Visibility:0, Input:"qwerty 
q 
zxcvb", ExpOutput:"zxcvbqwerty", Output:"zxcvbqwerty"
Verdict:ACCEPTED, Visibility:0, Input:"qwerty 
a 
zxcvb", ExpOutput:"qwerty", Output:"qwerty"
Verdict:ACCEPTED, Visibility:0, Input:"Thisproblemhasnoautomatedtestcases.
,
zxcvb", ExpOutput:"Thisproblemhasnoautomatedtestcases.", Output:"Thisproblemhasnoautomatedtestcases."
Verdict:ACCEPTED, Visibility:0, Input:"Thisproblemhasnoautomatedtestcases.
.
,,isn'tit?", ExpOutput:"Thisproblemhasnoautomatedtestcases,,isn'tit?.", Output:"Thisproblemhasnoautomatedtestcases,,isn'tit?."
*/
#include <stdio.h>

int main() 
{
    int flag=-1,i,j,l1,l2;
    char c1,s1[100],s2[50];
    scanf("%s\n",s1);
    scanf("%c\n",&c1);
    scanf("%s\n",s2);
    for(i=0;s1[i]!='\0';i++);
    l1=i;
    for(i=0;s2[i]!='\0';i++);
    l2=i;
    for(i=0;i<l1;i++)
    {   
        if(s1[i]==c1)
        {
            flag=i;
            break;
            }
    }
    if(flag==-1)
    printf("%s",s1);
    else
    {

        for(j=l1-1;j>=flag;j--)
            {
                s1[j+l2]=s1[j];
            }
            int c=0;
            for(i=flag;i<l2+flag;i++)
            {
                s1[i]=s2[c];
                c++;
            }
            printf("%s",s1);
    }
        return 0;
}