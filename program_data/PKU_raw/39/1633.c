struct stu
{
	char name[25];
	int s1;
	int s2;
	char y1;
	char y2;
	int t;
	int sum;
	struct stu *next;
};

struct stu *creat(int n)
{
	int i;
	struct stu *head;
	struct stu *p1,*p2;
	p1=p2=(struct stu *)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->y1,&p1->y2,&p1->t);
	head=NULL;
	
	for(i=0;i<n-1;i++)
	{
	
		if(i==0)head=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
		scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->y1,&p1->y2,&p1->t);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return (head);
}
void print(struct stu*head)
{
	struct stu*p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s %d %d %c %c %d\n",p->name,p->s1,p->s2,p->y1,p->y2,p->t);
			p=p->next;
		}while(p!=NULL);
}

main()
{
	int n,i,s,max;
	struct stu *head,*p1,*p2,*p3,*p;
	scanf("%d",&n);
	head=creat(n);
	p3=p2=p1=head;
	for(i=0;i<n;i++)
	{
		p1->sum=0;
		if((p1->t>0)&&(p1->s1>80))p1->sum=p1->sum+8000;
		if((p1->s2>80)&&(p1->s1>85))p1->sum=p1->sum+4000;
		if(p1->s1>90)p1->sum=p1->sum+2000;
		if((p1->y2=='Y')&&(p1->s1>85))p1->sum=p1->sum+1000;
		if((p1->y1=='Y')&&(p1->s2>80))p1->sum=p1->sum+850;
		p1=p1->next;
	}
	max=0;
	p1=head;
	for(i=0;i<n;i++)
	{
		if(p1->sum>max)
		{
			max=p1->sum;
			p2=p1;
		}
		p1=p1->next;
	}

	s=0;
	p1=head;
	for(i=0;i<n;i++)
	{
		s=s+p1->sum;
		p1=p1->next;
	}
	printf("%s\n%d\n%d\n",p2->name,p2->sum,s);
}
		