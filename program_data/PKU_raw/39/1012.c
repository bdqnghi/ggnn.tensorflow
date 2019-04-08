void main()
{
	struct s
	{
		char a[20];
		int b;
		int c;
		char d;
		char e;
		int f;
		int g;
		struct s *next;
	};
	int m,n,i,j,k,t,max,sum;
	struct s *p1,*p2,*head;
	scanf("%d",&n);
	head=0;
	p1=p2=(struct s *)malloc(sizeof(struct s));
	head=p1;
	scanf("%s %d %d %c %c %d",p1->a,&p1->b,&p1->c,&p1->d,&p1->e,&p1->f);
	for(i=0;i<n-1;i++)
	{
		p1=(struct s *)malloc(sizeof(struct s));
		p2->next=p1;
		p2=p1;
		scanf("%s %d %d %c %c %d",p1->a,&p1->b,&p1->c,&p1->d,&p1->e,&p1->f);
	}
	p2->next=0;
	p1=p2=head;
	for(i=0;i<n;i++)
	{
	p1->g=0;
	if(p1->b>80&&p1->f>0)
		p1->g=p1->g+8000;
	if(p1->b>85&&p1->c>80)
		p1->g=p1->g+4000;
	if(p1->b>90)
		p1->g=p1->g+2000;
	if(p1->b>85&&p1->e=='Y')
		p1->g=p1->g+1000;
	if(p1->c>80&&p1->d=='Y')
		p1->g=p1->g+850;
	p2=p1->next;
	p1=p2;
	}
	p1=p2=head;
	max=p1->g;
	for(i=0;i<n-1;i++)
	{
		p2=p1->next;
		p1=p2;
		if(p1->g>max)
		{
			max=p1->g;
			m=i;
		}
	}
	p1=head;
	for(i=0;i<m+1;i++)
		p1=p1->next;
	printf("%s\n%d\n",p1->a,p1->g);

p1=head;
sum=0;
for(i=0;i<n;i++)
{
	sum=sum+p1->g;
	p1=p1->next;
}
printf("%d",sum);
}