#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
  printf("------RUN-----\n");
  DIR *d = NULL;
  struct dirent *de = NULL;
  d = opendir(".");

  printf("DIRECTORIES:\n");
  //while ((de = readdir(d)) && (de->d_type == DT_DIR)){
  while (de = readdir(d)){
    if(de->d_type == 0) //DT_DIR
      printf("\t%s\n",de->d_name);
    else
      break;
  }
  printf("FILES:\n");
  while (de = readdir(d)){
    printf("\t%s\n",de->d_name);
  }
  closedir(d);
  printf("------END RUN------\n");
  return 0;
}
