struct student
{
	long number;
	int chinese;
	int math;
	int sum;
	struct student *next;
	struct student *last;
};
struct student *creat(int n)
{
	struct student *head,*p1,*p2;
	int i;
	p1=(struct student *)malloc(len);
	scanf("%d %d %d",&p1->number,&p1->chinese,&p1->math);
	p1->sum=p1->chinese+p1->math;
	p1->last=null;p1->next=null;
	head=p1;p2=p1;
	for(i=2;i<=n;i++)
	{
		p1=(struct student *)malloc(len);
		scanf("%d %d %d",&p1->number,&p1->chinese,&p1->math);
		p1->sum=p1->chinese+p1->math;
		p1->last=p2;
		p2->next=p1;
		p1->next=null;
		p2=p1;
	}
	return(head);
}
struct student *print(struct student *head)
{
	struct student *max,*p;
	p=head;max=head;
	while(p)
	{
		if(p->sum>max->sum)max=p;
		p=p->next;
	}
	printf("%d %d\n",max->number,max->sum);
	if(max==head)
	{
		max->next->last=null;
		head=max->next;
	}
	else 
	{
		max->next->last=max->last;
		max->last->next=max->next;
	}
	return(head);
}
void main()
{
	int n;
	struct student *head;
	scanf("%d",&n);
	head=creat(n);
	print(head);
	print(head);
	print(head);
}