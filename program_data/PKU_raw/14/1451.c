struct student
{long num;
int yuwen;
int shuxue;
int sum;
struct student *next;
};
int n;
void main()
{
	struct student *creat(void);
	void shuchu(struct student *head);
	int i;
	struct student *head;
	scanf("%d",&n);
	head=creat();
	for(i=0;i<3;i++)
		shuchu(head);
}
struct student *creat(void)
{
	int i,k=0;
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student *)malloc(len);/*???????*/
	scanf("%ld%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
	p1->sum=p1->shuxue+p1->yuwen;
	head=NULL;
	for(i=0;i<n;i++)
	{
		k++;
		if(k==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(len);
		scanf("%ld%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
		p1->sum=p1->shuxue+p1->yuwen;
	}
	p2->next=NULL;
	return(head);
}
void shuchu(struct student *head)
{
	struct student *p;
	int max,i;
	p=head;
	max=p->sum;
	for(i=0;i<n;i++)
	{
		if(p->sum>max)
			max=p->sum;
		p=p->next;
	}
		p=head;
		for(i=0;i<n;i++)
		{
			if(p->sum==max)
			{
				printf("%ld %d\n",p->num,p->sum);
				p->sum=0;
				break;
			}
			p=p->next;
		}
}