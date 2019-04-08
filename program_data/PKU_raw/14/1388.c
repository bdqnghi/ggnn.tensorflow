struct data
{
	long int num;
	int point1;
	int point2;
	int sum;
	struct data*next;
};
struct data*creat(long int n)
{
	long int i=0;
	struct data*p1,*p2,*head;
	p1=p2=(struct data*)malloc(sizeof(struct data));
	scanf("%ld %d %d",&p1->num,&p1->point1,&p1->point2);
	p1->sum=p1->point1+p1->point2;
	head=NULL;
	while(i<n)
	{
		i=i+1;
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct data*)malloc(sizeof(struct data));
		scanf("%ld %d %d",&p1->num,&p1->point1,&p1->point2);
		p1->sum=p1->point1+p1->point2;
	}
	p2->next=NULL;
	return(head);
}
struct data*max(struct data*head)
{
	struct data *p1,*max;
	max=head;
	p1=head;
	do
	{
		if(p1->sum>max->sum) max=p1;
		p1=p1->next;
	}while(p1!=NULL);
	return(max);
}
struct data*del(struct data*head,struct data*max)
{
	struct data *p1,*p2;
	p1=head;
	while(max!=p1)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1==head)
		head=p1->next;
	else
	{
		p2->next=p1->next;
	}
	return(head);
}
void main()
{
	struct data*a,*b,*c,*head;
	long int n;
	scanf("%ld",&n);
	head=creat(n);
	a=max(head);
	printf("%ld %d\n",a->num,a->sum);
	head=del(head,a);
	b=max(head);
	printf("%ld %d\n",b->num,b->sum);
	c=max(del(head,b));
	printf("%ld %d\n",c->num,c->sum);
}