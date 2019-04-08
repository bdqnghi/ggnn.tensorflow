struct info
{
	int num;
	int chin;
	int math;
	struct info *next;
};
struct info *create(int n)
{   
	int i;
	struct info *head,*p1,*p2;
	p1=(struct info*)malloc(sizeof(struct info));
	scanf("%d %d %d",&p1->num,&p1->chin,&p1->math);
	p1->next=NULL;
	head=p1;
	p2=p1;
	i=1;
	do
	{
		p1=(struct info*)malloc(sizeof(struct info));
		scanf("%d %d %d",&p1->num,&p1->chin,&p1->math);
		p1->next=NULL;
	    p2->next=p1;
	    p2=p1;
		i++;
	}while(i<n);
    return(head);
}
void arrange(struct info *head)
{
	int m,no1,no2,no3;
	struct info *p;
	p=head;
	m=0;
	while(p)
	{
	if (p->chin+p->math>m)
	{m=p->chin+p->math;no1=p->num;}
	p=p->next;
	}
	printf("%d %d\n",no1,m);
	m=0;
	p=head;
	no2=p->num;
	while(p)
	{
	if (p->chin+p->math>m&&p->num!=no1)
	{m=p->chin+p->math;no2=p->num;}
	p=p->next;
	}
	printf("%d %d\n",no2,m);
	m=0;
	p=head;
	no3=p->num;
	while(p)
	{
	if (p->chin+p->math>m&&p->num!=no1&&p->num!=no2)
	{m=p->chin+p->math;no3=p->num;}
	p=p->next;
	}
	printf("%d %d\n",no3,m);
}
int main()
{
	int n;
	struct info *head;
	scanf("%d",&n);
	head=create(n);
    arrange(head);
}
