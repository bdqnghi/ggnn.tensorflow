int n,m;
struct mon
{
	int i;
	struct mon *next;
};
struct mon *creat(int n)
{
	struct mon *head,*p1,*p2;
	int t;
	p1=p2=(struct mon *)malloc(sizeof(struct mon));
	head=p1;
	for(t=1;t<n;t++)
	{
		p1->i=t;
		p1=(struct mon *)malloc(sizeof(struct mon));
		p2->next=p1;
		p2=p1;
	}
	p1->i=t;
	p1->next=head;
	return head;
}
int find(struct mon *head,int m)
{
	struct mon *p1=head,*p2=head;
	int i=1;
	for(p1=p2=head;;i++)
	{
		if(m==1)
			return n;
		if(i%m!=0)
		{
			p2=p1;
			p1=p1->next;
		}
		else if(i%m==0)
		{
			p2->next=p1->next;
			p1=p1->next;
		}
		if(p1==p1->next)
			return p1->i;
	}
}
void main()
{
	struct mon *head;
	scanf("%d%d",&n,&m);
	while(n!=0&&m!=0)
	{
		head=creat(n);
		printf("%d\n",find(head,m));
		scanf("%d%d",&n,&m);
	}
}

