// first stage of the compiler: the lexical analysis.
//
// this part of the program breaks the source code down into tokens
// removing whitespaces and comments
//


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
#define MAX_NUMBER_OF_TOKENS 100

//
// structure of a token 
//

typedef struct token_t {
  char* type[6];
  char* value[11];
};



int main(int argc, char* argv[]) {
  
  // 
  // reading in the code that is going to be broken down into tokens
  //  

  FILE *compileDatei;
  int len = 4096;
  char buffer[len];



  if (argc != 2) {
    printf("USAGE: %s <file>\n", argv[0]);
    return 0;
  }

  compileDatei = fopen(argv[1], "r");
  fread(buffer, len+1, 1, compileDatei);
  printf("%s", buffer);
  fclose(compileDatei);


  return 0; 
}


