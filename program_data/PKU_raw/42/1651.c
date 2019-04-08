struct num
{
	int n;
	struct num * next;
};
int main()
{
	struct num *p1,*p2,*head,*temp;
	int n,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p1=(struct num*)malloc(sizeof(struct num));
		scanf("%d",&p1->n);
		if(i==0)
		{
			p2=p1;
			head=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p1->next=NULL;

	scanf("%d",&k);
	
	p1=p2=head;
	while(p1)
	{
		if(p1->n==k)
		{
			if(p1==head)
				head=p1->next;
			else
				p2->next=p1->next;
			p1=p1->next;
		}
		else
		{
			p2=p1;
			p1=p1->next;
		}
	}
	printf("%d",head->n);
	p1=head->next;
	while(p1)
	{
		printf(" %d",p1->n);
		p1=p1->next;
	}
	p1=head;
	while(p1)
	{
		temp=p1;
		p1=p1->next;
		free(temp);
	}
	return 0;

}