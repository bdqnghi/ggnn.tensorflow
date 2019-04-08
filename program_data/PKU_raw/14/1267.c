 struct student
  {
	  long num;
	  int scorec;
	  int scorem;
	  struct student *next;
  };
 struct student *creat(long n)
 {
	 struct student *head,*p1,*p2;
	 p1=(struct student*)malloc(LEN);
	 scanf("%ld %d %d",&p1->num,&p1->scorec,&p1->scorem);
	 long s=n-1;
	 p1->next=NULL;
	 head=p1;
	 p2=p1;
	 do
	 {
		 p1=(struct student*)malloc(LEN);
         scanf("%ld %d %d",&p1->num,&p1->scorec,&p1->scorem);
         p1->next=NULL;
		 p2->next=p1;
		 p2=p1;
		 s=s-1;
	 }while(s);
	 return(head);
 }
void main()
{
  struct student *head,*p,*q,stu1,stu2,stu3;
  long n,k1=-1,k2=-1,k3=-1,i,j;
  int l;
  scanf("%ld",&n);
  head=creat(n);
  for(p=head,i=0;p!=NULL;p=p->next,i++)
  {
	  l=0;
	  for(q=head,j=0;q!=NULL;q=q->next,j++)
		  if((q->scorec+q->scorem)>(p->scorec+p->scorem)||(((q->scorec+q->scorem)==(p->scorec+p->scorem))&&j<i))
		  {
			  l=l+1;
			  if(l>3)break;
		  }
      if(l==0)
	  {
		  k1=i;
		  stu1.num=p->num;stu1.scorec=p->scorec;stu1.scorem=p->scorem;
	  }
	  if(l==1)
	  {
		  k2=i;
          stu2.num=p->num;stu2.scorec=p->scorec;stu2.scorem=p->scorem;
	  }
	  if(l==2)
	  {
		  k3=i;
          stu3.num=p->num;stu3.scorec=p->scorec;stu3.scorem=p->scorem;
	  }
	  if(k1!=-1&&k2!=-1&&k3!=-1)break;
  }
  printf("%ld %d\n",stu1.num,stu1.scorec+stu1.scorem);
  printf("%ld %d\n",stu2.num,stu2.scorec+stu2.scorem);
  printf("%ld %d",stu3.num,stu3.scorec+stu3.scorem);
}