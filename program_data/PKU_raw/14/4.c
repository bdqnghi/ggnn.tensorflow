struct student
{
	int num;
	int score1;
	int score2;
	int sum;
	struct student *next;
	struct student *before;
};
main()
{
	int i,n,n1=0,n2=0,n3=0,m1=0,m2=0,m3=0;
	struct student *head;
	struct student *p1,*p2;
	scanf("%d",&n);
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->score1,&p1->score1);
	p1->sum=p1->score1+p1->score2;
	m1=p1->sum;
	n1=p1->num;
	head=0;
	i=0;
	while(i<=n-2)
	{
		i++;
		if(i==1)
			head=p1;
		else
		{
			p1->before=p2;
			p2->next=p1;
		}
		p2=p1;
		p1=(struct student *)malloc(LEN);
        scanf("%d %d %d",&p1->num,&p1->score1,&p1->score2);
		p1->sum=p1->score1+p1->score2;
		if(p1->sum>m3 && p1->sum<=m2)
		{
			m3=p1->sum;
			n3=p1->num;
		}
		if(p1->sum>m2 && p1->sum<=m1)
		{
			m3=m2;
			n3=n2;
			m2=p1->sum;
			n2=p1->num;
		}
		if(p1->sum>m1)
		{
			m3=m2;
			n3=n2;
			m2=m1;
			n2=n1;
			m1=p1->sum;
			n1=p1->num;
		}
	}
	printf("%d %d\n",n1,m1);
	printf("%d %d\n",n2,m2);
	printf("%d %d\n",n3,m3);
}