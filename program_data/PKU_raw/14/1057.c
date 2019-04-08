int n;

struct student
{
	int num;
	int chinese;
	int math;
	int total;
	struct student *next;
};
struct student *creat(int n)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	if(n==0)
	{
		head=NULL;
		return(head);
	}
	else
	{
		p1=(struct student*)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->chinese,&p1->math);
		p1->next=NULL;
		head=p1;
		p2=p1;
		for(i=1;i<n;i++)
		{
			p1=(struct student*)malloc(LEN);
			scanf("%d %d %d",&p1->num,&p1->chinese,&p1->math);
			p1->next=NULL;
			p2->next=p1;
			p2=p1;
		}
		return(head);
	}
	
}
void top3(struct student *head)
{
	struct student *p,*p1;
	int max=0; 
	p=head;
	do
	{
		p->total=(p->chinese)+(p->math);
		if((p->total)>max)
		{
			max=p->total;
			p1=p;
		}
		p=p->next;
	}while(p!=NULL);
	printf("%d %d\n",p1->num,p1->total);
	p1->total=0;
	p=head;
	max=0;
	do
	{
		if((p->total)>max)
		{
			max=p->total;
			p1=p;
		}
		p=p->next;
	}while(p!=NULL);
	printf("%d %d\n",p1->num,p1->total);
	p1->total=0;
	p=head;
	max=0;
	do
	{
		if((p->total)>max)
		{
			max=p->total;
			p1=p;
		}
		p=p->next;
	}while(p!=NULL);
	printf("%d %d\n",p1->num,p1->total);
	p1->total=0;
	max=0;

}
void main()
{
	struct student *head;
	scanf("%d",&n);
	head=creat(n);
	top3(head);
}