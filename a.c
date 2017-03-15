#include <stdio.h>
#include <string.h>

typedef struct info{
  char name[20];
  char id[20];
  char pass[];
} info;
int main(int argc, char* argv[]){
  if(argc != 2){
    return -1;
  }

  FILE *f;
  if((f=fopen(argv[1], "r")) == NULL)
    {
      printf("\n Khong the mo file \n");
      return -1;
    }
  info a[20];
  while(!feof(f))
    {
      fscanf(f,"%s",&a);
    }
  int i=0;
      while(i<20)
	{
	  printf("%s \t %s \t %s \n",a[i].name,a[i].id,a[i].pass);
	  i++;
	}
	   
    }


