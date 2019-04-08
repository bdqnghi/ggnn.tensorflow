struct student
{
	char num[10];
	float a,b,c;
	int t;
	struct student *next;
};
int n;
struct student *head;

struct student *creat()
{
	struct student *p1,*p2;
    int i;
	i=0;
	p1=p2=(struct student *)malloc(len);
	scanf("%s %f %f",&p1->num,&p1->a,&p1->b);
	p1->c=p1->a+p1->b;
	p1->t=0;
	head=null;
	while (i<n-1)
	{
		i++;
		if (i==1) head=p1;
		   else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(len);
        scanf("%s %f %f",&p1->num,&p1->a,&p1->b);
		p1->c=p1->a+p1->b;
	    p1->t=0;
	}	
    p2->next=p1;
	p1->next=null;
	return(head);
}

void max()
{
	struct student *p1,*p2;
	float mm=0;
	p1=head;
	for (;p1!=null;)
	{
		if (p1->c>mm&&p1->t==0)
		{
			mm=p1->c;
			p2=p1;
		}
		p1=p1->next;
	}
	printf("%s %g\n",p2->num,p2->c);
	p2->t=1;
}

main()
{
	int i,j;
	struct student *p;
	void max();
	scanf("%d",&n);
	creat();
	max();
    max();
	max();
}