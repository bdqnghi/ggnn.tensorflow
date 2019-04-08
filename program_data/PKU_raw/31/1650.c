struct student
{
       char what[100];
       struct student *last;
};
void print(struct student *p)
{
     printf("%s\n",p->what);
     if(p->last!=NULL)print(p->last);
}
main()
{
      struct student stu,*head,*tail,*p1,*p2;
      tail=(struct student*)malloc(LEN);
      tail->last=NULL;
      gets(tail->what);
      p1=tail;
      while(strcmp(p1->what,"end")!=0)
      {
                                      p2=(struct student*)malloc(LEN);
                                      p2->last=p1;
                                      gets(p2->what);
                                      p1=p2;
      }
      head=p1->last;
      print(head);
}