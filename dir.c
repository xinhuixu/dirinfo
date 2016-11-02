#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
  printf("------RUN-----\n");
  DIR *d = NULL;
  struct dirent *de = NULL;
  d = opendir(".");
  while (de = readdir(d)){
    printf("%s\n",de->d_name);   
  }
  
  closedir(d);
  printf("------END RUN------\n");
  return 0;
}
