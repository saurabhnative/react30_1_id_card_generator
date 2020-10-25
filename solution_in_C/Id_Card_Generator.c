//by using genrate id card through structure  
//Deepak 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct id_Card
{
    int Name[100];
    int company[100];
    int location[100];
};

struct id_Card e1;

int main()
{   
    printf("\t****id Card genrator by using c programming****\n");
    printf("\tEnter the information of employe \n");
    printf("\t Enter the name \n");
    scanf("%s",&e1.Name);
    printf("\tEnter the company Name of employe\n");
    scanf("%s",&e1.company);
    printf("\tEnter the location or present adress of employe\n");
    scanf("%s",&e1.location);
    printf("     *****Generating id card................\n");
    printf("\t Name   = %s\n",e1.Name);
    printf("\t Company Name = %s\n",e1.company);
    printf("\t Location = %s\n",e1.location);
  
    return 0;
}
