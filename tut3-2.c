#include <stdlib.h>
#include <stdio.h>

int main(){
  int readnum[10];
  FILE* fp = fopen("Question-2.txt","r");
  
  for(int count = 0; count < 10 ; count ++){
    fscand((fp,"%D", &readnum[count]);
    printf(%d \n", readnum[count]);
  }
  fclose(fp);
  return(0);
}
