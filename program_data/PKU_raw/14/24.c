struct stu
{
	long xh;
	int yw;
	int sx;
	int zh;
	struct stu *next;
};
struct stu *scan()
{
	long n;
	long num=0;
	struct stu *head,*p1,*p2;
	p1=p2=(struct stu *)malloc(sizeof (struct stu));
	scanf("%ld",&n);
//	head=0;
	head=p1;
    while(num<n)
	{
		scanf("%ld",&p1->xh);
		scanf("%d",&p1->yw);
		scanf("%d",&p1->sx);
		p1->zh=p1->yw+p1->sx;
        p2=p1;
		p1=(struct stu *)malloc(sizeof (struct stu));
		p2->next=p1;
		p1->next=0;
		num++;
	}
	return(head);
}
struct stu *del(struct stu *head,int max)
{
	struct stu *p1,*p2;
	p1=head;
	while(max!=p1->zh&&p1->next!=0)
	{
		p2=p1;
		p1=p1->next;
	}
	if(max==p1->zh)
	{
		if(p1==head)
		{
			head=p1->next;
		}
		else
		{
			p2->next=p1->next;
		}
	}
	return (head);
}
void print(struct stu *head)
{
	struct stu *p,*p1,*p2,*p3,*w;
	int max=0,num=0;
    while(num<3)
	{
		for(p=head;p!=0;p=p->next)
		{
			if(p->zh>max)
			{
				max=p->zh;
				w=p;
			}
		}
		num++;
		if(num==1)
		{
			p1=w;
			head=del(head,max);
			max=0;
		}
		if(num==2)
		{
			p2=w;
			head=del(head,max);
			max=0;
		}
		if(num==3)
		{
			p3=w;
		}
	}
	printf("%ld %d\n%ld %d\n%ld %d\n",p1->xh,p1->zh,p2->xh,p2->zh,p3->xh,p3->zh);
}
void main()
{
	struct stu *head;
	head=scan();
	print(head);
}