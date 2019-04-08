void main()
{
	struct s
	{
		int a;
		int b;
		int c;
		int d;
		struct s *next;
	};
	struct s *p1,*p2,*head;
	int i,j,k,m,n,t;
	scanf("%d",&n);
	p1=p2=(struct s *)malloc(sizeof(struct s));
	head=p1;
	scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	for(i=0;i<n-1;i++)
	{
		p1=(struct s *)malloc(sizeof(struct s));
		p2->next=p1;
		p2=p1;
		scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	}
	p2->next=0;
	p1=p2=head;
	for(i=0;i<n;i++)
	{
		p1->d=p1->b+p1->c;
		p1=p1->next;
	}
	p1=head;
	p2=p1->next;
	for(j=0;j<3;j++)
	{
		p1=head;p2=p1->next;
		for(i=0;i<n-2;i++)
		{
			if(p1->d<p2->d)
			{
				t=p1->d;
				p1->d=p2->d;
				p2->d=t;
				k=p1->a;
				p1->a=p2->a;
				p2->a=k;
			}
			
			p2=p2->next;
			
		}
		p1=head;

		
			printf("%d %d\n",p1->a,p1->d);
			p1->d=0;
			
	}
}