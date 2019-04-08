struct student
{
	char num[10];
	int o;
	struct student *next;
};

struct student *create(int n)
{
	struct student *head,*p1,*p2;
	int i;
	int scholar(struct student *p);

	p1=(struct student*)malloc(len);
	scanf("%s %d",p1->num,&p1->o);
	p1->next=NULL;

	head=p1;
	p2=p1;
	for(i=1;i<=n-1;i++)
	{
		p1=(struct student*)malloc(len);
		scanf("%s %d",p1->num,&p1->o);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}

struct student *max(struct student *head)
{
	struct student *p,*m;
	m=head;
	p=head->next;
	while(p)
	{
		if(p->o>m->o) m=p;
		p=p->next;
	}
	return m;
}

void main()
{
	int n;
	struct student *head,*m,*p;
	struct student *create(int n);
	struct student *max(struct student *head);
	scanf("%d",&n);
	head=create(n);
	p=head;
	for(;;)
	{
		m=max(p);
		if(m->o>=60) 
		{
			printf("%s\n",m->num);
			m->o=-1;
		}
		else break;
	}
	p=head;
	while(p)
	{
		if(p->o!=-1) printf("%s\n",p->num);
		p=p->next;
	}
}
