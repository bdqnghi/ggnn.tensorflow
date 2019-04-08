
struct student
{
	int num,cn,math,sum,rank;
	struct student *next;
};
int n;

struct student * creat(void)
{
	int i=1;
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->cn,&p1->math);
	head=p1;
	do
	{
		p2=p1;
		if(i==n)
			break;
		p1=(struct student *) malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->cn,&p1->math);
		p2->next=p1;
		i++;
	}while(1);
	p2->next=0;
	return(head);	
}

void count(struct student *head)
{
	int max=0;
	struct student *p1;
	n=1;
	p1=head;
	do
	{
		p1->sum=p1->cn+p1->math;
		if(max<p1->sum)
			max=p1->sum;
		if(p1->next==0)
			break;
		p1=p1->next;
	}while(1);
	p1=head;
	do
	{
		if(p1->sum==max)
		{
			p1->rank=n;
			n++;
		}
		if(n>3)break;
		if(p1->next==0)
		{
			p1=head;
			max--;
		}
		else
		p1=p1->next;
	}while(1);
}

void print(struct student *head)
{
	struct student *p1;
	n=1;
	p1=head;
	do
	{
		if (p1->rank==n)
		{
			printf("%d %d\n",p1->num,p1->sum);
			n++;
		}
		if(n>3)
			break;
		if(p1->next==0)
			p1=head;
		else p1=p1->next;
	}while(1);
}


void main()
{
	struct student *head;
	scanf("%d",&n);
	head=creat();
	count(head);
	print(head);
}

