#include <stdio.h>
#include <string.h>
#include "main.h"

extern int count;
void printAllInformation(struct userList *list){
 int i = 0;
 printf("<<<전화번호목록>>>\n");
 for(i = 0; i < count; i++){
  printf("%s\t%s\n", list[i].userName, list[i].userPhoneNumber);
 }
 printf("\n");
}
