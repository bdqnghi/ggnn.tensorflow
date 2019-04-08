struct number
{
	int num;
	struct number *next;
};
int n,k;
struct number *creat()
{
	struct number *head;
	struct number *p1,*p2;
	int num=1;
	head=NULL;
	while (num<=n)
	{
		p1=(struct number *)malloc(LEN);
		scanf("%d",&p1->num);
		if (num==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		num++;
	}
	p2->next=NULL;
	return (head);
}
void delet (struct number *pt)             //??????????????????????
{
	struct number *p,*pre;
	int sum=0,i;
	for (p=pt;p;p=p->next)
	{
		if (p->num==k)
			sum++;
	}
	for (i=1;i<=sum;i++)
	{
		for (p=pre=pt;p;p=p->next)
		{
			if (p->num!=k)
				pre=p;
			else
				break;
		}
		if (p==pt)
			pt=p->next;
		else
			pre->next=p->next;
		free(p);
	}
	for (p=pt;p->next!=NULL;p=p->next)
		printf("%d ",p->num);
	printf("%d",p->num);
}

int main()
{
	struct number *pt;
	scanf("%d",&n);
	pt=creat();
	scanf("%d",&k);
	delet(pt);
	return 0;
}