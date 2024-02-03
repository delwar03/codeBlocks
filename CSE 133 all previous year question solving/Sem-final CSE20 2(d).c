#include<stdio.h>
int main()
 {
     int x,y;
     scanf ("%d%d",&x,&y);
     int a=x+y--;
     if (a==3 ||a==5||a==9)
      {
          puts("go up");
          puts ("go down");
      }
      else if (a==6) puts ("go down");
      else if (a==7)
       {
           x-=2;
           puts("go left");
           puts ("game over");
       }
       else if (a==2) puts ("game over");
       else
        {
            y+=x--;
            x-=2;
            puts ("go left");
            puts ("game over");
        }
 }
