void main()
{
 struct stu
 {
  long num,c,m,d;
  struct stu *next;
 };
 long n,i,f;
 struct stu *head,*p1,*p2;
 scanf("%ld",&n);
 for (i=1;i<=n;i++)
   {
   p1=(struct stu*)malloc(LEN);
   scanf("%ld%ld%ld",&p1->num,&p1->c,&p1->m);
   p1->d=p1->c+p1->m;
   if (i==1)
     {
     p1->next=0;
     head=p1;
     }
     else
     {
     if (i<=3) f=1;
       else
       {
       p2=head->next->next;
       if (p1->d>p2->d) f=1;
	 else f=0;
       }
     if (f==1)
     {
     p2=head;
     if (p2->d<p1->d)
       {
       p1->next=p2;
       head=p1;
       }
       else
	 {
	 while ((p2->next!=0)&&(p2->next->d>p1->d))
	   p2=p2->next;
	 p1->next=p2->next;
	 p2->next=p1;
	 }
     }
     }
   }
 p1=head;
 for (i=1;i<=3;i++)
   {
   printf("%ld %ld\n",p1->num,p1->d);
   p1=p1->next;
   }
}