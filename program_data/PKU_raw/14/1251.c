
struct student
{
	long id;
	int chinese;
	int math;
	int score;
	struct student *next;
};

struct student *creat(void)
{
	int num;
	struct student *head,*p,*q;
	q=NULL;
	head=(struct student *)malloc(len);
	p=head;
	scanf("%d",&num);
	while(num>0)
	{
		q=p;
		scanf("%ld%d%d",&p->id,&p->chinese,&p->math);
		p->score=p->chinese+p->math;
		p=(struct student *)malloc(len);
		q->next=p;
		num--;
	}
	p->next=NULL;
	return (head);
}

void main()
{
	int i;
	struct student *p,*head,*max[3];
	head=creat();
	p=head;
	for(i=0;i<=2;i++)
	{
		max[i]=(struct student *)malloc(len);
		max[i]->score=0;
	}
	for(;p!=NULL;p=p->next)
	{
		if(p->score>max[0]->score)
		{
			max[2]=max[1];
			max[1]=max[0];
			max[0]=p;
		}
		else if(p->score>max[1]->score)
		{
			max[2]=max[1];
			max[1]=p;
		}
		else if(p->score>max[2]->score)
		{
			max[2]=p;
		}
	}
		for(i=0;i<=2;i++)
	{
		printf("%ld %d\n",max[i]->id,max[i]->score);
	}
}