
struct st
{
	int age,he;
	char num[15];
	struct st *next;
};

struct st *creat(int n)
{
	struct st *head,*p1,*p2;
	int i,h=105;
	p1=(struct st *)malloc(sizeof(struct st));
	p2=p1;
	head=p1;
	for (i=1;i<=n;i++)
	{
		p1=(struct st *)malloc(sizeof(struct st));
		scanf("%s %d",p1->num,&p1->age);
		if (p1->age >= 60)
			p1->he=p1->age*1000+h;
		else p1->he=h;
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		h--;
	}
	return(head);
}

void paixu(struct st *head)
{
	struct st *max,*p,*p1,*p2,*p3,*p4;
	p1=head;
	while(p1->next)
	{
		p2=p1->next;
		max=p2;
		p4=p2;
		p=p2->next;
		while(p)
		{
			if (p->he > max->he)
			{
				max=p;
				p3=p4;
			}
			p=p->next;
			p4=p4->next;
		}
		if (max>p1->next)
		{
			p3->next=max->next;
			p1->next=max;
			max->next=p2;
		}
		p1=p1->next;
	}
}

void main()
{
	struct st *creat(int n);
	void paixu(struct st *head);
	struct st *head,*p;
	int n;
	scanf("%d",&n);
	head=creat(n);
	paixu(head);
	p=head->next;
	while(p)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}