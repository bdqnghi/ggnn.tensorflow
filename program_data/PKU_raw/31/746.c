struct student 
{
     char id[15];
     char name[20];
     char sex;
     int age;
     char grade[20];
     char add[20];
     struct student *next;
};
 
struct student *set(void)
{
     struct student *head,*p1,*p2;
     head=(struct student *)malloc(LEN);
     p1=head;
     p2=head;
     scanf("%s%s %c %d %s %s",head->id,head->name,&head->sex,&head->age,head->grade,head->add);
     p1=(struct student *)malloc(LEN);
     scanf("%s%s %c %d %s %s",p1->id,p1->name,&p1->sex,&p1->age,p1->grade,p1->add);
     p2->next=p1;
     p2=p1;
     while(1)
     {
          p1=(struct student *)malloc(LEN);
          scanf("%s",p1->id);
          if(strcmp(p1->id,"end")==0)
          {
               p2->next=NULL;
               break;            
          } 
          scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->grade,p1->add);
          p2->next=p1;
          p2=p1;              
     } 
     return(head);
}
 
int main()
{
     struct student *p,*p1,*p2,*p3;
     int i,j,n=1;
     p=set();
     p1=p;p1=p1->next;p1=p1->next;
     p2=p;p2=p2->next;
     p3=p;
     while(p1!=NULL)
     {
          p2->next=p3;
          p3=p2;p2=p1;p1=p1->next;              
     }
     p2->next=p3;        //????????????????p2???? 
     p->next=NULL;       //???????p?????? 
     
     p1=p2;           //?p1??????????????????? 
     while(p1!=NULL)
     {
          printf("%s %s %c %d %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->grade,p1->add);
          p1=p1->next;
     }
     
     return 0;
}
