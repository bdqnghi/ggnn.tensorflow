struct student
{
	int num;
	int chi;
	int math;
	struct student *next;
};

struct student *creat(int n)
{
	struct student *head,*p1,*p2;
	int i;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
    head=p1;
	for(i=2;i<=n;i++)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
	    p2->next=p1;
		p2=p1;
	
	}
	p2->next=NULL;
	return head;
}

void main()
{
	struct student *head,*p,*p1,*p2,*p3;
	int n,m1,m2,m3,k;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	m1=m2=m3=0;
	if(head!=NULL)
	{
		do
		{
            k=p->chi+p->math;
			if(k>m1)
			{	m1=k;p1=p;}
			p=p->next;
		}
		while(p!=NULL);
		p=head;
		do
		{
			k=p->chi+p->math;
			if((k>m2)&&(p!=p1))
			{	m2=k;p2=p;}
			p=p->next;
		}
		while(p!=NULL);
		p=head;
		do
		{
			k=p->chi+p->math;
			if((k>m3)&&(p!=p1)&&(p!=p2))
			{	m3=k;p3=p;}
			p=p->next;
		}
		while(p!=NULL);
	}
	printf("%d %d\n%d %d\n%d %d\n",p1->num,m1,p2->num,m2,p3->num,m3);
}