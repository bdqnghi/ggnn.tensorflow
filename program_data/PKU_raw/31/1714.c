struct stu_imformation 
{ 
char num[16]; 
char name[20]; 
char sex; 
int age; 
char score[10]; 
char site[20]; 
struct stu_imformation *next; 
}; 
void main() 
{ 
struct stu_imformation *head,*p1,*p2; 
head=(struct stu_imformation *)malloc(LEN); 
scanf("%s %s %c %d %s %s",head->num,head->name,&head->sex,&head->age,head->score,head->site); 
p2=head; 
head->next=NULL; 
p1=(struct stu_imformation *)malloc(LEN);
scanf("%s",p1->num);
while(strcmp(p1->num,"end"))  
{ 
scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->site); 
p1->next=p2; 
head=p1; 
p2=p1; 
p1=(struct stu_imformation *)malloc(LEN); 
scanf("%s",p1->num);
} 
p1=head; 
while(p1!=NULL)
{ 
printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->site); 
p1=p1->next; 
} 
}