struct student
{
	char c[20];
	int num;
	struct student*next;
};
struct student*creat(int n)
{
	int i,r;
	struct student*p,*p1,*p2,*p3,*p4;
	p1=(struct student*)malloc(sizeof(struct student));
	scanf("%s %d",p1->c,&p1->num);
	p1->next=NULL;
	p=p1;
	r=0;
	p2=p1;
	for(i=0;i<n-1;i++)
	{
		p4=(struct student*)malloc(sizeof(struct student));
		scanf("%s %d",p4->c,&p4->num);
		if(p4->num>=60)
		{
		for(p2=p,p3=p,r=0;p2!=NULL;)
		{
			if(p4->num>p2->num)
			{
				if(p2==p3)
				{
					p=p4;
					p4->next=p2;
				}
				else
				{
					p3->next=p4;
					p4->next=p2;
				}
				r=1;
				break;
			}
			if(p4->num<=p2->num)
			{
				p3=p2;
				p2=p2->next;
			}
		}
		if(r==0)
		{
			p3->next=p4;
			p4->next=NULL;
		}
		}
		else
		{
			p2=p;
			while(p2!=NULL)
			{
				p3=p2;
				p2=p2->next;
			}
			p3->next=p4;
			p4->next=NULL;
		}

	}
	return p;
}
void print(struct student*p)
{
	struct student*p1;
	p1=p;
	while(p1!=NULL)
	{
		printf("%s\n",p1->c);
		p1=p1->next;
	}
}
void main()
{
	struct student*p,*p1;
	int n;
	scanf("%d\n",&n);
	p=creat(n);
	print(p);
}
