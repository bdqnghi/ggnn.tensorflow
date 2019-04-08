


struct student
{
	int num;
	int yuwen;
	int shuxue;
	int total;
	struct student *next;
};

void main()
{
	struct student *head,*p1,*p2,*P;
	
	int n,i=0,j=0;

	scanf("%d\n",&n);
	p1=p2=head=(struct student *)malloc(LEN);
	for(i=0;i<n;i++)
	{
		p2=p1;
		scanf("%d%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
		p1->total=p1->yuwen+p1->shuxue;
		p2->next=p1=(struct student *)malloc(LEN);
	}

	p2->next=head;
	p1=head;
	
	for(i=0;;)
	{
		if(j==3)break;
		head=p1;
		P=p1;
		p1=head->next;
		while(p1!=head)
		{
			if (p1->total>P->total) P=p1;
			else if(p1->total==P->total && p1->num<P->num) P=p1;
			p1=p1->next;
		}
		printf("%d %d\n", P->num,P->total);
		while(p1->next!=P) p1=p1->next;
		p1->next=P->next;//??P??
		j++;
	}


}

