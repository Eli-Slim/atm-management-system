#include "header.h"

int main()
{
  char string[50];
  char words[60][60];
  int wordNum = 0;
  int charNum;
  int length, i, j;
 
  fgets(string,sizeof(words),stdin);
 
  length = strlen(string);
 
  for(i = 0; i < length; i++)
  {
    charNum = 0;
 
    if(!isspace(string[i]))
    {
      words[wordNum][charNum] = string[i];
      charNum++;
    } 
 
    else
    {
      wordNum++;
    }
  }
 
  printf("\n\n");
 
  for(i = 0; i <= wordNum; i++)
  {
    for(j = 0; words[i][j] != '\0'; j++)
    {
    if(isalnum(words[i][j]))
        printf("%c",words[i][j]);
    }
 
    printf("\n\n");
  }
 
  return 1;
}