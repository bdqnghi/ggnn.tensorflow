struct student
{
	int num;
	int yuwen;
	int math;
	int total;
	struct student *next;
};
long m,n,k;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2,*p3;
	m=0;head=0;
	while(m<n)
	{
	m=m+1;
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%d %d %d",&p1->num,&p1->yuwen,&p1->math);
    p1->total=p1->yuwen+p1->math;
	p2=head;
	if(m==1){head=p1;p1->next=0;}
	else
	{
		k=0;
		while(p1->total<=p2->total&&p2->next!=0&&k<=3)
		{
			p3=p2;
			p2=p2->next;k++;
		}
		if(p1->total>p2->total&&k<=3)
		{
			if(head==p2)head=p1;
			else p3->next=p1;
			p1->next=p2;
		}
		else
		{
			p2->next=p1;p1->next=0;
		}
	}
	}
	return(head);
}

void main()
{
	struct student *head,*p,*px;
	int t1=0,t2;
	scanf("%ld",&n);
	head=creat();
	p=head;
	while(t1<3)
	{
		printf("%d %d\n",p->num,p->total);
		p=p->next;
		t1++;
	}
}