#define MAX_SIZE 50
#define MAX_NAME_LINE 10
#define MAX_PHONE_NUMBER 20

struct userList{
 char userName[MAX_NAME_LINE];
 char userPhoneNumber[MAX_PHONE_NUMBER];
};

void enrollInformation(struct userList *list);
void findInformation(struct userList *list);
void printAllInformation(struct userList *list);

