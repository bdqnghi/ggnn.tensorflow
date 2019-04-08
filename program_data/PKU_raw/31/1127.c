void main()
{
	struct s
	{
		char a[100];
		char b[100];
		char c;
		int d;
		float e;
		char f[100];
		struct s *next;
	};
	struct s *p1,*p2,*head;
	int i,j,k,m,n,t;
	p1=p2=(struct s *)malloc(sizeof(struct s));
	head=p1=p2;n=1;
	scanf("%s %s %c %d %f %s",p1->a,p1->b,&p1->c,&p1->d,&p1->e,p1->f);
	for(i=0;i<10000;i++)
	{
		p1=(struct s *)malloc(sizeof(struct s));
		p2->next=p1;
		p2=p1;
		scanf("%s",p1->a);
		if(strcmp(p1->a,"end")!=0)
		{
			scanf("%s %c %d %f %s",p1->b,&p1->c,&p1->d,&p1->e,p1->f);
			n++;
		}
		else
			break;
	}
	p1=p2=head;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		p1=p1->next;
		printf("%s %s %c %d %g %s\n",p1->a,p1->b,p1->c,p1->d,p1->e,p1->f);
		p1=head;
	}
	printf("%s %s %c %d %g %s\n",p1->a,p1->b,p1->c,p1->d,p1->e,p1->f);
}
