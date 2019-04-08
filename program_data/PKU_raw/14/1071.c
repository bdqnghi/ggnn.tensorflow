struct student
{
	int num;
	int yu;
	int shu;
	struct student *next;
};

void main()
{
	struct student *head,*p1,*p2;
	int n,i,j,k;
	scanf("%d",&n);
	head=p1=p2=(struct student*)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
	for(i=1;i<n;i++)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	for(i=1;i<=3;i++)
{	p1=p2=head;
	while(p1!=NULL)
	{
		if(p1->yu+p1->shu>p2->yu+p2->shu)
			p2=p1;
		p1=p1->next;
	}
	printf("%d %d\n",p2->num,p2->yu+p2->shu);
	p2->yu=0;
	p2->shu=0;
}
	
}
		
	