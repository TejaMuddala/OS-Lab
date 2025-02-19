#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(){
  char buff[100];
  DIR*drip;
  struct dirent*dptr;
  printf("\n\nEnter directory name:");
  scanf("%s",buff);
  drip=opendir(buff);
  if(drip==NULL){
    printf("The given directory does not exist.\n");
    exit(1);
  }
  printf("Contents of directory%s:\n",buff);
  while((dptr=readdir(drip))!=NULL){
    printf("%s\n",dptr->d_name);
  }
  closedir(drip);
  return 0;
}
