#include "header.h"

void get_input_str(char *data){
    char buffer [50];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strlen(buffer)-1] = '\0';
    strcpy(data, buffer);
}

void get_input(int *option){
    char buffer [50];
    fgets(buffer, sizeof(buffer), stdin);
    *option = atoi(buffer);
}
// int main()
// {
//   char string[50];
//   char words[60][60];
//   int wordNum = 0;
//   int charNum = 0;
//   int length, i, j;

//   fgets(string,sizeof(string),stdin);

//   length = strlen(string);

//   for(i = 0; i < length; i++)
//   {

//     if(!isspace(string[i]))
//     {
//       words[wordNum][charNum] = string[i];
//       charNum++;
//     }

//     else
//     {
//       words[wordNum][charNum] = '\0';
//       wordNum++;
//       charNum = 0;
//     }
//   }

//   printf("\n\n");

//   for(i = 0; i < wordNum; i++)
//   {
//     for(j = 0; words[i][j] != '\0'; j++)
//     {
// 	if(isalnum(words[i][j]))
//         printf("%c",words[i][j]);
//     }

//     printf("\n\n");
//   }

//   return 0;
// }

// void get_input_str(char *data){
//     char buffer [50];
//     fgets(buffer, sizeof(buffer), stdin);
//     buffer[strlen(buffer)-1] = '\0';
//     strcpy(data, buffer);
// }