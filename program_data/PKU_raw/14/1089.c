struct student
{
	int num;
	int ch;
	int math;
	int total;
	struct student *next;
};
int n;
int t;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	scanf("%d",&n);
	head=p1=p2=(struct student*)malloc(LEN);
	scanf("%d%d%d",&p1->num,&p1->ch,&p1->math);
	p1->total=p1->ch+p1->math;
	for (i=2;i<=n;i++)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%d%d%d",&p1->num,&p1->ch,&p1->math);
		p1->total=p1->ch+p1->math;
		p2->next=p1;
		p2=p1;
		
	}
	p2->next=NULL;
	return(head);
}

void print(struct student *head)
{
	struct student *p;
	int max;
	p=head;
	max=p->total;
	p=p->next;
	while(p->next!=NULL)
	{
		if(p->total>max)
		{
			max=p->total;
			t=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",t,max);
}

struct student *del(struct student *head, int a)
{
	struct student *p1,*p2;
	p1=head;
	while (a!=p1->num&&p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1==head)
	{
		head=p1->next;
	}
	else
	{
		p2->next=p1->next;
	}
	return(head);
}

void main()
{
	struct student *head1,*head2,*head3;
	head1=creat();
	print(head1);
	head2=del(head1,t);
	print(head2);
	head3=del(head2,t);
	print(head3);
}
