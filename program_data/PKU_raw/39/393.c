int N;
struct student
{
	char name[20];
	int score1;
	int score2;
	char c1;
	char c2;
	int paper;
	int money;
	struct student*next;
};
void mon(struct student*p)
{
	p->money=0;
	if((p->score1>80)&&(p->paper>=1))
	{
		p->money=p->money+8000;
	}
	if((p->score1>85)&&(p->score2>80))
	{
		p->money+=4000;
	}
	if(p->score1>90)
	{
		p->money+=2000;
	}
	if((p->score1>85)&&(p->c2=='Y'))
	{
		p->money+=1000;
	}
	if((p->score2>80)&&(p->c1=='Y'))
	{
		p->money+=850;
	}
}
struct student*creat()
{
	struct student*head,*p1,*p2;
	int i;
	p1=(struct student*)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->c1,&p1->c2,&p1->paper);
	p1->next=NULL;
	mon(p1);
	head=p1;
	p2=p1;
	for(i=1;i<N;i++)
	{
		p1=(struct student*)malloc(LEN);
	    scanf("%s %d %d %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->c1,&p1->c2,&p1->paper);
	    p1->next=NULL;
	    mon(p1);
		p2->next=p1;
		p2=p1;
	}
	return(head);
}
void f(struct student*head)
{
	int max;
	int sum=0;
	char name[20];
    struct student*p;
	max=head->money;
	strcpy(name,head->name);
	for(p=head;p;p=p->next)
	{
		sum+=p->money;
		if(p->money>max)
		{
			max=p->money;
			strcpy(name,p->name);
		}
	}
	printf("%s\n%d\n%d\n",name,max,sum);
}
int main()
{
	struct student*head;
	scanf("%d",&N);
	head=creat();
	f(head);
}


