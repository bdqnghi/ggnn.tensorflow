struct stud
{
	int num;
	int score,score1,score2;
	struct stud *next;
}head,end;
void create(int n)
{
	int i;
	struct stud *p1,*p2;
	head.next=NULL;
	for (i=0;i<=n-1;i++)
	{
		p1=(struct stud *)malloc(sizeof(struct stud));
		if (!i) head.next=p1;
		else p2->next=p1;
		scanf("%d",&p1->num);
		scanf("%d",&p1->score1);
		scanf("%d",&p1->score2);
		p1->score=p1->score1+p1->score2;
		p2=p1;
	}
	p2->next=&end;
}
void find()
{
	struct stud *max1,*max2,*max3,*p1,*swap;		//max1 is the max
	max1=head.next;
	max2=max1->next;
	max3=max2->next;
	p1=max3->next;
	if ( max1->score < max2->score ) 
	{
		swap=max1;
		max1=max2;
		max2=swap;
	}
	if ( max2->score < max3->score ) 
	{
		swap=max2;
		max2=max3;
		max3=swap;
	}
	if ( max1->score < max2->score ) 
	{
		swap=max1;
		max1=max2;
		max2=swap;
	}
	while (p1!=&end)
	{
		if ( p1->score > max3->score ) max3=p1;
		if ( max3->score > max2->score )
		{
			swap=max3;
			max3=max2;
			max2=swap;
		}
		if ( max2->score > max1->score )
		{
			swap=max1;
			max1=max2;
			max2=swap;
		}
		p1=p1->next;
	}
	printf("%d %d\n",max1->num,max1->score);
	printf("%d %d\n",max2->num,max2->score);
	printf("%d %d\n",max3->num,max3->score);
}
void main()
{
	int n;
	scanf("%d",&n);
	create(n);
	find();
}
