
struct student
{
	int num;
	int chi;
	int mat;
	int tol;
	struct student *next;
};

void main()
{

	struct student *p1,*p2,*head;
	struct student *p,*a,*b,*c;
	struct student temp;

	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		p1=(struct student*)malloc(LEN);
		scanf("%d%d%d",&p1->num,&p1->chi,&p1->mat);
		p1->tol=p1->chi+p1->mat;
		if(i==0) 
			head=p2=p1;
		else
			p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	
	p=head;
	temp.tol=0;
	a=b=c=&temp;
	while(p!=NULL)
	{
		if(p->tol>a->tol)
		{
			c=b;
			b=a;
			a=p;
		}
		else if(p->tol>b->tol)
		{
			c=b;
			b=p;
		}
		else if(p->tol>c->tol)
			c=p;
		p=p->next;
	}

	printf("%d %d\n",a->num,a->tol);
	printf("%d %d\n",b->num,b->tol);
	printf("%d %d\n",c->num,c->tol);
}
