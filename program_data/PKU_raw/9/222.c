
struct pat
{
	char id[30];
	int age;
	int num;
	int flag;
	struct pat *next;
	struct pat *ns;
};

int n;

void sort(struct pat *head)
{
	int i,j;
	struct pat *q,*p,*max;
	q=head;
	
	for(i=0;i<n;i++)
	{
		p=head->next;
		while(1)
		{
			if(p->flag)
				break;
			p=p->next;
		}
		max=p;
		while(1)
		{
			if((p->num)>(max->num)&&p->flag)
				max=p;
			p=p->next;
			if(p==NULL)
				break;
		}
		max->flag=0;
		q->ns=max;
		q=q->ns;

	}
	q->ns=NULL;
}




void main()
{
	int i;
	struct pat *head,*p1,*p2,*p;
	scanf("%d",&n);
	head=(struct pat*)malloc(LEN);
	for(i=0;i<n;i++)
	{
		p1=(struct pat*)malloc(LEN);
		scanf("%s %d",p1->id,&p1->age);
		p1->flag=1;
		if(p1->age>=60)
			p1->num=10000*p1->age+n-i;
		else
			p1->num=n-i;
		if(i==0)
		{
			head->next=p1;
			p2=p1;
		}
		else
			p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;

	sort(head);

	p=head->ns;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->id);
		p=p->ns;
	}
}