
struct student 
{
       char num[100];
       struct student *next;
};
main()
{
      int n;
      struct student *head;
      struct student *p1,*p2;
      n=0;
      p1=p2=(struct student*)malloc(LEN);
      gets(p1->num);
     
      while(p1->num[0]!='e')
      {
      n=n+1;
      if(n==1) p1->next=NULL;
      else p1->next=p2;
      p2=p1;
      p1=(struct student*)malloc(LEN);
      gets(p1->num);
      }
      head=p2;
      do
      {
              printf("%s\n",head->num);
              head=head->next;
      }while(head!=NULL);

}

