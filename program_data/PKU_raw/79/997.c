struct node{
	int a;
	struct node *next;
};
void main()
{
	int i,j,m,n;
	struct node *head,*p1,*p2;
	for(i=1;;i++)
	{
		scanf("%d%d",&n,&m);
		if(n==0)
			break;
		p1=(struct node*)malloc(sizeof(struct node));
		p1->a=1;
		head=p1;
		for(j=2;j<=n;j++)
		{
			p2=(struct node*)malloc(sizeof(struct node));
			p2->a=j;
			p1->next=p2;
			p1=p2;
		}
		p1->next=head;
		while(head->next!=head)
		{
			for(i=1;i<m;i++)
			{
				p1=head;
				head=head->next;
			}
			p1->next=head->next;
			head=head->next;
		}
		printf("%d\n",head->a);
	}
}