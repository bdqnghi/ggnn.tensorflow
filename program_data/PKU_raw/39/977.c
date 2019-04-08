struct stu
{
	char n[30];
	int a;
	int b;
	char c;
	char d;
	int e;
	int sum;
	struct stu *next;
};
void main()
{
	int i,n,max=0,sum;
	struct stu *head,*p1,*p2;
	scanf("%d",&n);
	head=p1=p2=(struct stu*)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->n,&p1->a,&p1->b,&p1->c,&p1->d,&p1->e);
	p1->sum=0;
	for(i=0;i<n-1;i++)
	{
		p1=(struct stu*)malloc(LEN);
		scanf("%s %d %d %c %c %d",p1->n,&p1->a,&p1->b,&p1->c,&p1->d,&p1->e);
		p1->sum=0;
		p2->next=p1;
		p2=p1;
	}
	p1->next=NULL;
	p1=p2=head;
	for(i=0;i<n;i++,p1=p1->next)
	{
		if(p1->a>80&&p1->e>0)
			p1->sum+=8000;
		if(p1->a>85&&p1->b>80)
			p1->sum+=4000;
		if(p1->a>90)
			p1->sum+=2000;
		if(p1->a>85&&p1->d=='Y')
			p1->sum+=1000;
		if(p1->b>80&&p1->c=='Y')
			p1->sum+=850;
	}
	p1=head;
	for(i=0;i<n;i++,p1=p1->next)
	{
		if(max<p1->sum)
			max=p1->sum;
	}
	p1=head;
	sum=0;
	for(i=0;i<n;i++,p1=p1->next)
	{
		sum+=p1->sum;
	}
	p1=head;
	for(i=0;i<n;i++,p1=p1->next)
	{
		if(p1->sum==max)
		{
			printf("%s\n%d\n",p1->n,p1->sum);
			break;
		}
	}
		printf("%d",sum);
}