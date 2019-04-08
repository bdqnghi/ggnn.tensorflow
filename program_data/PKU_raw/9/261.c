int i,j,n;
struct st
	{
        char a[20];
		int x;
		struct st *next;
	}*p1,*p2,*p,*head,*pre;
void main()
{
scanf("%d",&n);void f(struct st *);
p1=p2=head=(struct st *)malloc(sizeof(struct st));
	for(i=0;i<n;i++)
	{
		scanf("%s %d",p1->a,&p1->x);
		p1=(struct st *)malloc(sizeof(struct st));p2->next=p1;p2=p1;
	}
	f(head);
p=head;
for(i=0;i<n;i++)
{
	printf("%s\n",p->a);p=p->next;
}
}
void f(struct st *p)
{
for(i=0;i<n-1;i++)
	{
		pre=p1=p2=head;p1=p1->next;
		for(j=0;j<n-1-i;j++)
		{
			if(p1->x>p2->x&&p1->x>=60)
			{
			if(j==0)
			{p2->next=p1->next;p1->next=p2;head=pre=p1;}
			else
			{p2->next=p1->next;p1->next=p2;pre->next=p1;}
			}
			if(j!=0)pre=pre->next;
			p2=pre->next;p1=p2->next;
		}
	}
}

