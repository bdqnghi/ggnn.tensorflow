struct stu
{
	int num;
	int ch;
	int math;
	struct stu* next;
};


void main()
{
	int n,m=0,max=0,max2=0,max3=0,no=0,no2=0,no3=0;
	struct stu*p;
	scanf("%d",&n);
	struct stu*p1,*p2,*head;
	p1=(struct stu*)malloc(LEN);
	scanf("%d%d%d",&p1->num,&p1->ch,&p1->math);
	head=NULL;

	while(n-1)
	{
		m=m+1;
		if(m==1)
			head=p1;
		else
			p2->next=p1;
	     p2=p1;
		 p1=(struct stu*)malloc(LEN);
	     scanf("%d%d%d",&p1->num,&p1->ch,&p1->math);
	     n--;
	}
	p2->next=NULL;
	
	p=head;
	while(p)
	{
		p->ch=p->math+p->ch;
	    p=p->next;
	}

	p=head;
	while(p)
	{
		if(p->ch>max)
		{
		  max=p->ch;
		  no=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",no,max);

	p=head;
	while(p)
	{
		if(p->ch<=max&&p->ch>max2&&p->num!=no)
		{
		  max2=p->ch;
		  no2=p->num;
		}
		p=p->next;
	}
	printf("%d %d\n",no2,max2);

	p=head;
	while(p)
	{
		if(p->ch<=max2&&p->ch>max3&&p->num!=no&&p->num!=no2)
		{
		  max3=p->ch;
		  no3=p->num;
		}
		p=p->next;
	}
	printf("%d %d",no3,max3);

}