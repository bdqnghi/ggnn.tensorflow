struct student
{
	int num;
	int yuwen;
	int math;
	int total;
	struct student *next;
};
long m,n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	m=0;head=0;
	while(m<n)
	{
	m=m+1;
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%d %d %d",&p1->num,&p1->yuwen,&p1->math);
    p1->total=p1->yuwen+p1->math;
	if(m==1){head=p1;p2=p1;}
	else p2->next=p1;
	p2=p1;
	}
    p2->next=0;	
	return(head);
}

void main()
{
	struct student *head,*p,*px;
	int a[3][2],t1,t2;
	scanf("%ld",&n);
	head=creat();
	p=head;
	a[0][1]=a[1][1]=a[2][1]=0;
	if(head!=0)
	do
	{
		if(p->total>a[2][1])
		{a[2][1]=p->total;a[2][0]=p->num;}
		if(a[2][1]>a[1][1])
		{t1=a[1][1];a[1][1]=a[2][1];a[2][1]=t1;t2=a[1][0];a[1][0]=a[2][0];a[2][0]=t2;}
        if(a[1][1]>a[0][1])
        {t1=a[0][1];a[0][1]=a[1][1];a[1][1]=t1;t2=a[0][0];a[0][0]=a[1][0];a[1][0]=t2;}
		p=p->next;
	}
		while(p!=0);
	for(t1=0;t1<=2;t1++)
	{
		printf("%d %d\n",a[t1][0],a[t1][1]);
	}

}