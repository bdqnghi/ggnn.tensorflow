struct student
{
	long num;
	int chi;
	int math;
	int sum;
	struct student *next;
};
long n;

void main()
{
	struct student *creat();
	struct student *head,*p,*q1,*q2,*q3;
	int a;
	scanf("%ld",&n);
	head=creat();
	p=head;
	a=0;
	while(p!=NULL)
	{
		if(p->sum>a)
		{
			a=p->sum;
			q1=p;
		}
		p=p->next;
	}
	p=head;
	a=0;
	while(p!=NULL)
	{
		if(p->sum>a&&p!=q1)
		{
			a=p->sum;
			q2=p;
		}
		p=p->next;
	}
	p=head;
	a=0;
	while(p!=NULL)
	{
		if(p->sum>a&&p!=q1&&p!=q2)
		{
			a=p->sum;
			q3=p;
		}
		p=p->next;
	}
	printf("%d %d\n",q1->num,q1->sum);
	printf("%d %d\n",q2->num,q2->sum);
	printf("%d %d\n",q3->num,q3->sum);
}

struct student *creat()
{
	struct student *head,*p1,*p2;
	int i;
	head=NULL;
	p1=p2=(struct student *)malloc(LEN);
	for(i=0;i<=n-1;i++)
	{
		scanf("%ld%d%d",&p1->num,&p1->chi,&p1->math);
		p1->sum=p1->chi+p1->math;
		if(i==0) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
	}
	p2->next=NULL;
	return(head);
}