/*numPass=5, numTotal=7
Verdict:ACCEPTED, Visibility:1, Input:"3 4 5", ExpOutput:"Right Triangle", Output:"Right Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 4 3", ExpOutput:"Acute Triangle", Output:"Acute Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 3 7", ExpOutput:"Invalid Triangle", Output:"Invalid Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 3 5", ExpOutput:"Obtuse Triangle", Output:"Obtuse Triangle"
Verdict:ACCEPTED, Visibility:0, Input:"1 2 3", ExpOutput:"Invalid Triangle", Output:"Invalid Triangle"
Verdict:WRONG_ANSWER, Visibility:0, Input:"3 6 2", ExpOutput:"Invalid Triangle", Output:"Acute Triangle"
Verdict:WRONG_ANSWER, Visibility:0, Input:"12 13 5", ExpOutput:"Right Triangle", Output:"Acute Triangle"
*/
#include<stdio.h>

int main()
     {int a,b,c,temp;
      temp=c;
      scanf("%d%d%d",&a,&b,&c);
     if(a>=c&&a>=b)
       {c=a;
        a=b;
        b=temp;
       }
     else if (b>=c&&b>=a)
        {c=b;
         b=a;
         a=temp;
        }
        
     if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
      { if((a*a)+(b*b) > (c*c))
         { printf("Acute Triangle");
         }
        else if((a*a+b*b)==(c*c))
         {  printf ("Right Triangle");
         }
        else 
         {  printf("Obtuse Triangle");
         }
      }
    else{printf("Invalid Triangle"); 
         }
    return 0;
   }