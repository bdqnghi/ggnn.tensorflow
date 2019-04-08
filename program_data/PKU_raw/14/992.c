struct stud
{
	int n;
	int chinese;
	int math;
	int total;
	struct stud *next;
};
int tol;
struct stud *creat(void)
{
	struct stud *head,*p1,*p2;
	int i=1;
	p1=p2=(struct stud *)malloc(sizeof(struct stud));
	head=p1;
	for(i=1;i<tol;i++)
	{
		scanf("%d%d%d",&p1->n,&p1->chinese,&p1->math);
		p1->total=(p1->math+p1->chinese);
		p1=(struct stud *)malloc(sizeof(struct stud));
		p2->next=p1;
		p2=p1;
	}
	scanf("%d%d%d",&p1->n,&p1->chinese,&p1->math);
	p1->total=(p1->math+p1->chinese);
	p2->next=p1;
	p1->next=0;
	return head;//???????
}
int max(struct stud *head,int max1,int max2)
{
	struct stud *p1;
	int maxtotal=head->total,max_index;
	for(p1=head;p1!=0;p1=p1->next)
	{
		if(p1->total>maxtotal&&p1->n!=max1&&p1->n!=max2)
		{
			maxtotal=(p1->total);
			max_index=(p1->n);
		}
	}
	if(maxtotal!=max1)
		printf("%d %d\n",max_index,maxtotal);
	return max_index;
}
void main()
{
	struct stud *head;
	int max1,max2;
	scanf("%d",&tol);
	head=creat();
	max1=max(head,0,0);
	max2=max(head,max1,0);
	max(head,max1,max2);
}
