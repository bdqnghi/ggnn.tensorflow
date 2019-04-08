struct stu
{
	int id;
	int sum;
	struct stu *next;
};

void main()
{
	struct stu *head,*p1,*p2,*p0;
	int n,i,ch,ma,len;
	scanf("%d",&n);
	len = sizeof (struct stu);
	
	p1 = p2 = (struct stu*)malloc(len);

	head = p1;
	scanf("%d%d%d",&p1->id,&ch,&ma);
	p1->sum = ch + ma;
	p1->next = 0;

	for (i=2;i<=n;i++)
	{
        p0 = (struct stu*)malloc(len);
		scanf("%d %d %d",&p0->id,&ch,&ma);
		p0->sum = ch + ma;

		p1=p2=head;
		while ( (p0->sum <= p1->sum) && (p1->next != 0) )
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->sum > p1->sum)
		{
			if (head == p1)
				head = p0;
			else p2->next = p0;
			p0->next = p1;
		}
		else 
		{
			p1->next = p0;
			p0->next = 0;
		}
		if (i>3)
		{
			p1 = head->next;
			p1 = p1->next;
			p1->next = 0;
		}
	}
	p1 = head;
	while (p1!=0)
	{
    	printf("%d %d\n",p1->id,p1->sum);
		p1 = p1->next;
	}
}

