struct student
{
 char num[100];
 char name[100];
 char sex[2];
 int age;
 char score[20];
 char addr[100];
 struct student *next;
};

struct student *creat(void)
{
 struct student *head;
 struct student *p1,*p2=NULL;
 p1=(struct student*)malloc(LEN);
 scanf("%s",p1->num);
 if (strcmp(p1->num,"end")!=0)
 {
 scanf("%s%s%d%s%s",p1->name,p1->sex,&p1->age,p1->score,p1->addr);
 p1->next=NULL;
 p2=p1;
 
 while (1)
 { 
  p1=(struct student*)malloc(LEN);
  scanf("%s",p1->num);
  if (strcmp(p1->num,"end")==0)
   break;
  else
  {
   scanf("%s%s%d%s%s",p1->name,p1->sex,&p1->age,p1->score,p1->addr);
   p1->next=p2;
   p2=p1;
  }  
 }
 }
 head=p2;
 return(head);
}
 
void print(struct student *head)
{
 struct student *p1;
 p1=head;
 while(p1!=NULL)
 {
  printf("%s %s %s %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->addr);
  p1=p1->next;
 }
}
 
void main()
{
 struct student *head=NULL;
 head=creat();
 print(head);
}