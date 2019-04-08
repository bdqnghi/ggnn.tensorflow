struct student
{
	int num;
	int chi;
	int mat;
	int all;
	struct student *next;
}
main()
{
	struct student *head,*p1,*p2,*p;
	long n,i;
	int j,max;
	scanf("%d",&n);
	p1=p2=(struct student*)malloc(LEN);
	scanf("%d%d%d",&p1->num,&p1->chi,&p1->mat);
	p1->all=p1->chi+p1->mat;
	head=p1;
	for(i=1;i<n;i++)
	{
		if(i>1)
			p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%d%d%d",&p1->num,&p1->chi,&p1->mat);
		p1->all=p1->chi+p1->mat;
	}
	p2->next=NULL;
	for(j=0;j<3;j++)
	{
		p=p1=head;
		max=p->all;
		while(p->next!=NULL)
		{
			p2=p;
			p=p->next;
			if(p->all>max)
			{
				max=p->all;
				p1=p2;
			}
		}
		printf("%d %d\n",p1->next->num,p1->next->all);
		if(max==head->all)
			head=head->next;
		else
			p1->next=(p1->next)->next;
	}
}