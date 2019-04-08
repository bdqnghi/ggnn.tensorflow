
struct stu
{
	char name[20];
	int mark1;
	int mark2;
	char position;
	char hometown;
	int paper;
	int fund;
	struct stu *next;
};

struct stu *creat(int n)
{
	int i=1;
	struct stu *head;
	struct stu *p1,*p2;
	p1=(struct stu *)malloc(sizeof(struct stu));
	scanf(A,p1->name,&p1->mark1,&p1->mark2,&p1->position,&p1->hometown,&p1->paper);
	p1->fund=0;
	if(n==1)
	{
		head=p1;
		p1->next=NULL;
		free(p1);
		return head;
	}
	else
	{
		head=p1;
		p2=p1;
		do
		{
			p1=(struct stu *)malloc(sizeof(struct stu));
			scanf(A,p1->name,&p1->mark1,&p1->mark2,&p1->position,&p1->hometown,&p1->paper);
			p1->fund=0;
			i++;
			if(i==n)
			{
				p1->next=NULL;
				p2->next=p1;
				break;
			}
			else
			{
				p2->next=p1;
				p2=p1;
			}
		}while(1);
		return head;
	}
}

int main(void)
{
	int n,i,j=0,max=0;
	struct stu *head;
	struct stu *p;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	while(p)
	{
		if(p->mark1>80&&p->paper>0)
			p->fund+=8000;
		if(p->mark1>85&&p->mark2>80)
			p->fund+=4000;
		if(p->mark1>90)
			p->fund+=2000;
		if(p->mark1>85&&p->hometown=='Y')
			p->fund+=1000;
		if(p->mark2>80&&p->position=='Y')
			p->fund+=850;
		p=p->next;
	}
	p=head;
	while(p)
	{
		/*printf("%d %d\n",p->fund,i);*/
		j+=p->fund;
		if(p->fund>max)
			max=p->fund;
		p=p->next;
	}
	p=head;
	while(p)
		if(max==p->fund)
		{
			printf("%s\n%d\n%d\n",p->name,p->fund,j);
			break;
		}
		else p=p->next;
}