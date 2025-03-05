#include <stdio.h>
int main ()
{
   for (int i = 1; i < 20; i++)
   {
    if (i*i > 100){
        break;
    }
    else{
        printf ("numero %d: %d\n", i, (i*i));
     }
   }
}
 