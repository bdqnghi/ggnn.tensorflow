struct p
{
	char id[11];
	int y;
	struct p *next;
};
int n;
struct p *creat(void)
{
	struct p *head,*p1,*p2;
	int i;
	scanf("%d",&n);
	p1=p2=(struct p *)malloc(LEN);
	for(i=0;i<n;i++)
	{
		scanf("%s%d\n",p1->id,&p1->y);
		if(i==0)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct p *)malloc(LEN);
	}
	p2->next=NULL;
	return head;
}
void px(struct p *head)
{
	struct p *p;
	int k,t;
	leap:
	t=0;
	for(p=head;p!=0;)
	{
		if(p->y>=60)
		t=1;
		p=p->next;
	}
	if(t==1)
	{
		p=head;
		k=p->y;
		for(;p!=0;)
		{
			if(p->y>k)
			k=p->y;
			p=p->next;
		}
		for(p=head;p!=0;)
		{
			if(p->y==k)
			{
				printf("%s\n",p->id);
				p->y=0;
			}
			p=p->next;
		}
		goto leap;
	}
	for(p=head;p!=0;)
	{
		if(p->y!=0)
		printf("%s\n",p->id);
		p=p->next;
	}
}
void main()
{
    struct p *p;
    p=creat();
    px(p);
}