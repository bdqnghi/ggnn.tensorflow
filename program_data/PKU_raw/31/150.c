struct student
{
    char name[32],sex,address[32],id[10],score[10];
    int age;
    struct student *next;
};
struct student *create()
{
    struct student *head=NULL,*p1,*p2;
    char ch[10];
    p1=p2=(struct student*)malloc(Len);
    scanf("%s %s %c %d %s %s",p1->id,p1->name,&p1->sex,&p1->age,p1->score,p1->address);
    p1->next=NULL;
    head=p1;
    p2=p1;
    do
    {
        scanf("%s",ch);
        if(strcmp(ch,"end")==0) break;
     else
      {     p1=(struct student*)malloc(Len);
            strcpy(p1->id,ch);
            scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
            p1->next=NULL;
            p2->next=p1;
            p2=p1;
      }
    }while(1);
         return head;
}
   void print(struct student *head)
   {
       struct student *p1,*p2;
    while(p1)
    {
       p1=head;
       if(p1->next==NULL)
       {
            printf("%s %s %c %d %s %s",p1->id,p1->name,p1->sex,p1->age,p1->score,p1->address);
            break;
       }
        else
        {
            while(p1->next!=NULL)
          {
             p2=p1;
             p1=p1->next;
          }
           printf("%s %s %c %d %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->score,p1->address);
           p2->next=NULL;
           free(p1);
        }
    }
  }
  int main()
  {
      struct student *head;
      head=create();
      print(head);
  }
