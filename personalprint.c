#include <stdio.h>
#include <string.h>
#include "main.h"

extern int count;
void findInformation(struct userList *list){
 char findName[MAX_NAME_LINE];
 printf("검색할 이름 : ");
 scanf("%s", findName);
 printf("\n");
 for(int i=0; i<count; i++){
  if(strcmp(findName, list[i].userName) == 0){
   printf("%s\t%s\n", list[i].userName, list[i].userPhoneNumber);
   break;
  }
 }
 printf("\n");
}
