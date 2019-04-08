struct data
{
	int num;
	struct data *next;
};
int main()
{
	struct data *p1,*p2,*head,*temp;
	int i,m,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p1=(struct data *)malloc(sizeof(struct data));
		scanf("%d",&p1->num);
		if(i==0)
		{
			head=p1;
			p2=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p1->next=NULL;
	scanf("%d",&m);
	p1=head;
	p2=head;
	while(p1!=NULL)
	{
		if(p1->num==m)
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
	p1=head;
	printf("%d",p1->num);
	p1=p1->next;
	while(p1)
	{
		printf(" %d",p1->num);
		p1=p1->next;
	}
	p1=head;
	while(p1)
	{
		temp=p1;
		p1=p1->next;
		free(temp);
	}
	head=NULL;
	return 0;
}