#include <stdio.h>
#include <string.h>

void to_lower(char *str);

int main(void)
{
    char text[10001];
    char word[51];
    char arr[10001][51];
    char temp[51] = {0};
    int count;
    int tot_count;
    int i;
    int j;

    scanf("%s\n", word);
    scanf("%[^\n]%*c\n", text);

    to_lower(word);
    to_lower(text);

    memset(temp, 0, sizeof(temp));

    count = 0;
    i = 0;
    j = 0;
    while (text[i])
    {
        if (text[i] == ' ')
        {
            strcpy(arr[count], temp);
            memset(temp, 0, sizeof(temp));
            count += 1;
            j = 0;
            i++;
        }
        temp[j] = text[i];
        i++;
        j++;
    }
    strcpy(arr[count], temp);
    count += 1;

    tot_count = 0;
    i = 0;
    while (i < count)
    {
        if (strcmp(arr[i], word) == 0)
            tot_count += 1;
        i++;
    }

    printf("%d\n", tot_count);

    return (0);
}

void to_lower(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char motATrouver[51];
   scanf("%s\n", motATrouver);
   int longueurMot = strlen(motATrouver);
   for (int pos = 0; pos < longueurMot; pos = pos + 1)
   {
      motATrouver[pos] = toupper(motATrouver[pos]);
   }
   int nbFois = 0;
   char mot[51] = "";
   while (scanf("%s", mot) == 1)
   {
      int longueurMotLu = strlen(mot);
      // Ce test permet d’éviter de passer du temps sur les mots n’ayant
      // pas la bonne taille.
      if (longueurMotLu == longueurMot)
      {
         for (int pos = 0; pos < longueurMotLu; pos = pos + 1)
         {
            mot[pos] = toupper(mot[pos]);
         }
         if (strcmp(mot, motATrouver) == 0)
         {
            nbFois = nbFois + 1;
         }
      }
   }
   printf("%d\n", nbFois);
}
*/