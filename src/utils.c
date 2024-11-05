#include "header.h"

void get_input_str(char *data){
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while(1){
        read = getline(&line, &len, stdin);
        if(read == -1){
            continue;
        }
        if(line[read-1] == '\n'){
            line[read-1] = '\0';
        }
        if (sscanf(line, "%s", data) > 0){
            break;
        }
    }
    free(line);
}

void get_input_int(int *option){
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while(1){
        read = getline(&line, &len, stdin);
        if(read == -1){
            continue;
        }
        if(line[read-1] == '\n'){
            line[read-1] = '\0';
        }
        if (sscanf(line, "%d", option) > 0){
            break;
        }
    }
    free(line);
}

int getUserFromFile(FILE *ptr, char name[50], struct User *u){
    return fscanf(ptr, "%d %s %s", &u->id, name, u->password) != EOF;
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