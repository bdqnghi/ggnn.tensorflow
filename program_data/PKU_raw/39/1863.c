
struct student
{
       char name[20];
       int scorefinal;
       int scoreclass;
       char gan;
       char xi;
       int lun;
       int money;
       struct student *next; 
};
main()
{
      int n,j,sum=0,flag=0;
      struct student *head;
      struct student *p1,*p2,*p5,*p4,*p;
      scanf("%d",&n);
      p1=p2=(struct student*)malloc(LEN);
      p1->money=0;
      scanf("%s %d %d %c %c %d",p1->name,&p1->scorefinal,&p1->scoreclass,&p1->gan,&p1->xi,&p1->lun);
      head=p1;
      for(j=0;j<n-1;j++)
      {
          p1=(struct student*)malloc(LEN);
          p1->money=0;
          p2->next=p1;
          p2=p1;
          scanf("%s %d %d %c %c %d",p1->name,&p1->scorefinal,&p1->scoreclass,&p1->gan,&p1->xi,&p1->lun);
      }
      p2->next=NULL;
      p5=head;
      for(;p5!=NULL;p5=p5->next)
      {   if(p5->scorefinal>80&&p5->lun>=1) p5->money=p5->money+8000;
          if(p5->scorefinal>85&&p5->scoreclass>80) p5->money=p5->money+4000;
          if(p5->scorefinal>90) p5->money=p5->money+2000;
          if(p5->scorefinal>85&&p5->xi=='Y') p5->money=p5->money+1000;
          if(p5->scoreclass>80&&p5->gan=='Y') p5->money=p5->money+850;
          sum=sum+p5->money;
      }
      for(p4=head;p4!=NULL;p4=p4->next)
      {   
          if(p4->money>flag)
          {flag=p4->money;p=p4;}
      }
      printf("%s\n%d\n%d",p->name,flag,sum);
   
}