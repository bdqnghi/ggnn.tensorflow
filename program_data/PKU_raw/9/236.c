struct s
{
	char a[100];
	int b;
	struct s *next;
};
void main()
{
	struct s *p1,*p2,*p0,*head,*insert(struct s *head,struct s *stud),*h;
	int i,j,k,m,n,t,x;
	scanf("%d",&n);
	head=0;
	p1=(struct s *)malloc(sizeof(struct s));h=(struct s *)malloc(sizeof(struct s));
	p2=head=p1;
	p1->next=0;k=0;j=0;
	scanf("%s %d",p1->a,&p1->b);x=0;
	if(p1->b<60)
	{
	p2=h=p1;
	x=1;
	}

	else
		p2=h;
	for(i=0;i<n-1;i++)
	{
		p0=(struct s *)malloc(sizeof(struct s));
		scanf("%s %d",p0->a,&p0->b);
		if(p0->b>=60)
		{
		head=insert(head,p0);
		k++;
		}
		else
		{
			p2->next=p0;
			p2=p0;
			j++;
		}
			

	}
	p1=head;
	if(x==0)
		i=-1;
	else
		i=0;
	for(;i<k;i++)
	{
		printf("%s\n",p1->a);
			p1=p1->next;
	}
	if(x==0)
	{p2=h->next;
	i=0;}
	else
	{p2=h;i=-1;}
	for(;i<j;i++)
	{
		printf("%s\n",p2->a);
		p2=p2->next;
	}
	

}
struct s *insert(struct s *head,struct s *stud)
{
	struct s *p0,*p1,*p2;
	p1=head;
	p0=stud;
	if(head==0)
	{
		head=p0;p0->next=0;
	}
	else
	{while((p0->b<=p1->b)&&(p1->next!=0))
	{p2=p1;
	p1=p1->next;}
	if(p0->b>p1->b)
	{if(head==p1)head=p0;
	else p2->next=p0;
	p0->next=p1;}
	else
	{p1->next=p0;p0->next=0;}
	}
	return(head);
}

