#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void recursive_sort(char** a, int i, int j){
  char pivot[200];
  if(j <= i){return;}
  int s = i;
  strcpy(pivot,a[j]);
  for(int k = i;k < j;++k){
    if(strcmp(a[k],pivot) < 0){
      char *x = a[s];
      a[s] = a[k];
      a[k] = x;
      s++;
     } 
  }
  char *x = a[j];
  a[j] = a[s];
  a[s] = x;
  recursive_sort(a, i, s-1);
  recursive_sort(a, s+1, j);   
}
int main(int argc,char *argv[]){
 recursive_sort(argv,0, argc-1);
 for(int i=1;i<argc;i++){
     printf("%s\n",argv[i]);
     }
 return 0;
}
