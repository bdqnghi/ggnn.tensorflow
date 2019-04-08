int main()
{
	struct stu
	{
		int a,b,c;
		struct stu *next;
		struct stu *back;
	};
	struct stu *head,*p1,*p2,*p,*pmax1,*pmax2,*pmax3;
	int n,i,j,max1,max2,max3;
	scanf("%d",&n);
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	head=p1;
	for(i=1;i<n;i++)
	{
		p1=(struct stu *)malloc(sizeof(struct stu));
		p2->next=p1;
		p1->back=p2;
		p2=p1;
		scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	}
	p=head;
	max1=0;
	for (i=0;i<n;i++)
	{
		
		if (max1<(p->b+p->c))
		{
			max1=p->b+p->c;
			pmax1=p;
		}
		p=p->next;
	}
	p=head;
	max2=0;
	for (i=0;i<n;i++)
	{
		
		if (max2<(p->b+p->c)&&(p!=pmax1))
		{
			max2=p->b+p->c;
			pmax2=p;
		}
		p=p->next;
	}
	p=head;
	max3=0;
	for (i=0;i<n;i++)
	{
		
		if (max3<(p->b+p->c)&&(p!=pmax1)&&(p!=pmax2))
		{
			max3=p->b+p->c;
			pmax3=p;
		}
		p=p->next;
	}
	printf("%ld %d\n",pmax1->a,(pmax1->b+pmax1->c));
	printf("%ld %d\n",pmax2->a,(pmax2->b+pmax2->c));
	printf("%ld %d\n",pmax3->a,(pmax3->b+pmax3->c));
	return 0;
}