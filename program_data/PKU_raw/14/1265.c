
struct stu
{
	int num;
	int ch;
	int mt;
	int sum;
	struct stu*next;
};

void main()
{
	struct stu *p1,*p2,*p,*head;
	int n,max=0,max2=0,max3=0,no=0,no2=0,no3=0;
	scanf("%d",&n);
	p1=(struct stu*)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->ch,&p1->mt);
	p1->sum=p1->ch+p1->mt;
	head=p1;
	p2=p1;	

	while(n-1)
	{
		p1=(struct stu*)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->ch,&p1->mt);
		p1->sum=p1->ch+p1->mt;
		p2->next=p1;
		p2=p1;
		//printf("%d %d %d\n",p1->num,p1->ch,p1->mt,p1->sum);
		n--;
	}
	p2->next=NULL;

	p=head;
	while(p)
	{
		if(p->sum>max)
		{
			max=p->sum;
			no=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",no,max);

	p=head;
	while(p)
	{
		if(p->sum>max2&&p->sum<=max&&p->num!=no)
		{
			max2=p->sum;
			no2=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",no2,max2);

	p=head;
	while(p)
	{
		if(p->sum>max3&&p->sum<=max2&&p->num!=no2&&p->num!=no)
		{
			max3=p->sum;
			no3=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",no3,max3);
}