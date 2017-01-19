#include <stdio.h>
int main()
{
      char str [50];
      int number_of_letters, number_of_digits, number_of_spaces, number_of_other;
      int i;

      printf("Text:\n");
      gets(str);

      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              number_of_letters++;
              else if (ch>= '0' && ch<= '9')
                       number_of_digits++;
              else if (ch == ' ')
                       number_of_spaces++;
              else number_of_other++;
                       i++;
          }

              printf("Letters: %d", number_of_letters);
              printf("Digits: %d", number_of_digits);
              printf("Spaces: %d", number_of_spaces);
              printf("Other: %d", number_of_other);
              getch();
}
