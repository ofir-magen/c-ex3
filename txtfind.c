#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFERSIZE 100

int similar (char *s, char* t){
    if(strcmp(s,t) == 0){
        return 1;
    }
    char* t1 = "";
    t1 = (char*) malloc(strlen(t));
    for (int i = 0; i < strlen(t); i++){
        strcpy(t1,"");
         for (int j = 0; j < strlen(t); j++){
            if(j != i){
                strncat(t1 , t  + j , 1);
            }
         }
         if(strcmp(s,t1) == 0){
              return 1;
     }
    }
       free(t1);
    return 0;
}
void print_line(char* line , char* word){
    if (strstr(line, word)) printf("%s",line);
}
    void print_similar_words(char* line, char* word){
    char* delim = " ";
    char* string = line;
    char * token = strtok(string, delim);
   while( token != NULL ) {
       if(similar(word , token) == 1){
      printf("%s\n", token ); //printing each token
       }
      token = strtok(NULL, " ");
   }
        }
        
int main(){
	
    char choice;
    char* word;
    char buffer[BUFFERSIZE];
    int i = 0;
    while(fgets(buffer, BUFFERSIZE , stdin)){
        if(i == 0){ 
        
        char * token = strtok(buffer, " ");
             // char word[strlen(token)];
             
            word = malloc(strlen(token) + 1);
            strcpy(word,token);
            
            token = strtok(NULL, " ");
              choice = token[0];
             token = strtok(NULL, " ");

        }else{
          if(choice == 'a'){
            print_line(buffer,word);
          }
          else if(choice == 'b'){
        print_similar_words(buffer,word);
          }
        }
    i++;
    }
    return 0;
}
