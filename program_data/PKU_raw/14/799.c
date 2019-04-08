struct student
{
	int id;
	int cs;
	int ms;
	int s;
	struct student *next;
};
void main()
{
	int n,i,m=0;
	scanf("%d",&n);
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->id,&p1->cs,&p1->ms);
	p1->s=p1->cs+p1->ms;
	head=NULL;
	while(p1->id!=n)
	{
		m=m+1;
		if(m==1) head=p1;
		else
		p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %d %d",&p1->id,&p1->cs,&p1->ms);
		p1->s=p1->cs+p1->ms;
	}
	p2->next=NULL;
	for(i=0;i<3;i++)
	{
		p1=p2=head;
		do
		{
			p2=p2->next;
			if(p1->s<p2->s)
				p1=p2;
		}while(p2->next!=NULL);
		printf("%d %d\n",p1->id,p1->s);
		p1->s=-1;
	}
}