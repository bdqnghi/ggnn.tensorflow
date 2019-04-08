struct student
{
 int a;
 int b;
 int c;
 int d;
 struct student *next;
};
 int n;
 struct student *creat(int i)
 {
	 struct student *head,*p1,*p2;
	 n=0;
	 p1=p2=(struct student *)malloc(sizeof(struct student));
	 scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	 p1->d=p1->c+p1->b;
	 head=NULL;
	 while(n<i-1)
	 {
      n=n+1;
	  if(n==1)head=p1;
	  else p2->next=p1;
	  p2=p1;
	  p1=(struct student *)malloc(sizeof(struct student));
      scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
      p1->d=p1->c+p1->b;
	 }
	 p2->next=NULL;
	 return(head);
 }
void del(struct student *ahead,int num)
 { struct student *p1,*p2;
    p1=ahead;
   while(num!=p1->d&&p1->next!=NULL)
   {p2=p1;p1=p1->next;}
   if(num==p1->d)
   {
	   if(p1==ahead){printf("%d %d\n",p1->a,p1->d);ahead=p1->next;}
   else{printf("%d %d\n",p1->a,p1->d);p2->next=p1->next;}
   }
}
void print(struct student *head)
{
	int i;
	 struct student *p;
	 for(i=0;i<3;i++)
	 {
		 p=head;
     int max=p->d;
	 while(p->next!=NULL)
	 {
		 p=p->next;
		 if(max<p->d)
			 max=p->d;
	 }
	 del(head,max);
	 }
}
void main()
{
	int i;
	scanf("%d",&i);
   struct student *ahead;
   ahead=creat(i);
   print(ahead);
}
