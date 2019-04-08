
struct student
{
	char id[20];
	int chinese;
	int math;
	int score;
	struct student *next;
};

int n;

struct student *create(int m)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(length);
	
	head=null;
	while(n<m)
	{
		scanf("%s %d %d",p1->id,&p1->chinese,&p1->math);
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(length);
	
	}
	p2->next=null;
	return head;
}

void plus(struct student *head)
{
	struct student *p,*q;
	p=head;
	if(head!=null)
	{
		do
		{
			p->score=p->chinese+p->math;
			
			p=p->next;
			
		}
		while(p!=null);

	}
}

void pri_top3(struct student *head)
{
	struct student *p,*q,*p1,*p2,*p3;
	p1=p2=p3=head;
	p=head->next;
	while(p!=null)
	{
		if(p->score>p1->score)
		{
			p3=p2;p2=p1;p1=p;
		}
		else if((p->score<=p1->score)&&(p->score>p2->score))
		{
			p3=p2;p2=p;
		}
		else if((p->score<=p2->score)&&(p->score>p3->score))
			p3=p;
	
		p=p->next;
		
	}
	printf("%s %d\n",p1->id,p1->score);
	printf("%s %d\n",p2->id,p2->score);
	printf("%s %d\n",p3->id,p3->score);
}

void main()
{
	int m;
	scanf("%d",&m);
	struct student *p=create(m);
	plus(p);
	pri_top3(p);
}


