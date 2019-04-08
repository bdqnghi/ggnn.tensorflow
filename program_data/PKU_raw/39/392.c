int N;
struct student
{
	char name[20];
	float score1;
	float score2;
	char c1;
	char c2;
	int paper;
	int money;
	struct student*next;
};
void mon(struct student*p)
{
	    p->money=0;
	   if(p->score1>80&&p->paper>0)
		{
			p->money+=8000;
		}
		if(p->score1>85&&p->score2>80)
		{
			p->money+=4000;
		}
		if(p->score1>90)
		{
			p->money+=2000;
		}
		if(p->score1>85&&p->c2=='Y')
		{
			p->money+=1000;
		}
		if(p->score2>80&&p->c1=='Y')
		{
			p->money+=850;
		}
}

struct student*creat()
{
	int i=1;
	struct student*head,*p1,*p2;
	p1=(struct student*)malloc(LEN);
	scanf("%s %f %f %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->c1,&p1->c2,&p1->paper);
	mon(p1);
	p1->next=NULL;
	head=p1;
	p2=p1;
    do
	{
		if(i>=N)
		{
			break;
		}
		else
		{
		p1=(struct student*)malloc(LEN);
	    scanf("%s %f %f %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->c1,&p1->c2,&p1->paper);
		mon(p1);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		i++;
		}
	}while(1);
	return(head);
}
void print(struct student*head)
{
	int total=0,max=0;
	struct student*p,*pmax;
	p=head;
	do
	{
		total+=p->money;
		if(p->money>max)
		{
			pmax=p;
			max=p->money;
		}
		p=p->next;
	}while(p);
    printf("%s\n%d\n",pmax->name,max);
	printf("%d",total);
}
int main()
{
	int total;
	struct student*head;
	scanf("%d",&N);
	head=creat();
	print(head);
}
