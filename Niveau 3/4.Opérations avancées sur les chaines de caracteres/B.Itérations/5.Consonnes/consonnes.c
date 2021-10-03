#include <stdio.h>

int main(void)
{
    char voy[6] = "aeiouy";
    char letter;
    int i;

    letter = 'b';
    while (letter < 'z' + 1)
    {
        i = 0;
        while (voy[i])
        {
            if (letter == voy[i])
                letter++;
            i++;
        }
        printf("%c", letter);
        if (letter != 'z')
            printf(" ");
        letter++;
    }
    return (0);
}

/*
#include <stdio.h>
int main()
{
   for (char car = 'a'; car <= 'z'; car = car + 1)
   {
      if (car != 'a' && car != 'e' && car != 'i' &&
          car != 'o' && car != 'u' && car != 'y')
      {
         if (car != 'z')
         {
            printf("%c ", car);
         }
         else
         {
            printf("%c\n", car);
         }
      }
   }
   printf("\n");
}
*/

/* Programme avec fonction:

#include <stdio.h>
#include <stdbool.h>
bool estVoyelle(char car)
{
   char voyelles[7] = "aeiouy";
   for (int idVoy = 0; idVoy < 7; idVoy = idVoy + 1)
   {
      if (car == voyelles[idVoy])
         return true;
   }
   return false;
}
int main()
{
   for (char car = 'a'; car <= 'z'; car = car + 1)
   {
      if (!estVoyelle(car))
      {
         if (car != 'z')
         {
            printf("%c ", car);
         }
         else
         {
            printf("%c\n", car);
         }
      }
   }
   printf("\n");
   return 0;
}
*/
