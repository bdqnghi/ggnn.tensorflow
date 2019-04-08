struct student
{
	int id;
	int chinese;
	int math;
	int sum;
	struct student* next;
};
int n;
struct student *creat()
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(len);
	scanf("%d",&n);
	scanf("%d%d%d",&p1->id,&p1->chinese,&p1->math);
	p1->sum=p1->chinese+p1->math;
	head=NULL;
	for(;p1->id<n;)
	{
		if(p1->id==1) head=p1;
		p1=(struct student*)malloc(len);
		scanf("%d%d%d",&p1->id,&p1->chinese,&p1->math);
		p1->sum=p1->chinese+p1->math;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
void main()
{
	struct student *head,*p1,*p2,*p3,*p;
	head=creat();
	for(p=head,p1=head,p2=head,p3=head;p!=NULL;p=p->next)
	{
		if(p->sum>p1->sum)
		{
			p3=p2;
			p2=p1;
			p1=p;
		}
		else if(p->sum>p2->sum)
		{
			p3=p2;
			p2=p;
		}
		else if(p->sum>p3->sum)
		{
			p3=p;
		}
	}
	printf("%d %d\n",p1->id,p1->sum);
	printf("%d %d\n",p2->id,p2->sum);
	printf("%d %d\n",p3->id,p3->sum);
}
