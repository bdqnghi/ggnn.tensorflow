struct stu
{
	int num;
	int chi;
	int math;
	int s;
	struct stu *next;
};
struct stu *creat(int n)
{
	int i;
	struct stu *head;
	struct stu *p1,*p2;
	p1=p2=(struct stu *)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
	head=p1;
	for(i=1;i<n;i++)
	{
	    p1=(struct stu*)malloc(sizeof(struct stu));
		scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return (head);
}
void main()
{
	int i,n,t,m;
	struct stu *head,*p1,*p2;
	scanf("%d",&n);
	head=creat(n);
	p1=head;
	for(i=0;i<n;i++)
	{
		p1->s=p1->chi+p1->math;
		p1=p1->next;
	}
	p1=head;
	p2=p1->next;
	for(i=0;i<3;i++)
	{
		while(p2!=NULL)
		{
			if(p2->s>p1->s)
			{
				t=p2->s;
				p2->s=p1->s;
				p1->s=t;
				m=p2->num;
				p2->num=p1->num;
				p1->num=m;
			}p2=p2->next;
		}printf("%d %d\n",p1->num,p1->s);
		if(i==2)break;
		p1=p1->next;p2=p1->next;
	}
}