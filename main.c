#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

const char userPassword[]="qwer1234";
int main(){
 int serviceNumber;
 struct userList *list = (struct userList*)malloc(sizeof(struct userList)*MAX_SIZE);
 do{
  printf("전화번호 관리\n\n");
 printf("1.등록\t2.전체검색\t3.특정인검색\t4.종료\n\n");
 printf("메뉴 선택 : ");
 scanf("%d", &serviceNumber);
 switch(serviceNumber){
  case 1 :enrollInformation(list); break;
  case 2 :printAllInformation(list); break;
  case 3 :findInformation(list); break;
  case 4 :printf("프로그램을 종료합니다.\n");
  }
} while(serviceNumber != 4);
 free(list);
 return 0;
}
