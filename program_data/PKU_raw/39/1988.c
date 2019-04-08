struct student
{
	char name[20];
	int score1;
	int score2;
	char leader[2];
	char west[2];
	int paper;
	int money;
	struct student *next;
};
struct student *creat(int n)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	head=p1;
	for(i=0;i<n;i++)
	{
		p2=p1;
		scanf("%s%d%d%s%s%d",p1->name,&p1->score1,&p1->score2,&p1->leader,&p1->west,&p1->paper);
		{
			p1->money=0;
			if(p1->score1>80&&p1->paper!=0)
				p1->money=p1->money+8000;
			if(p1->score1>85&&p1->score2>80)
				p1->money=p1->money+4000;
			if(p1->score1>90)	
				p1->money=p1->money+2000;
			if(p1->score1>85&&(strcmp(p1->west,"Y")==0))
				p1->money=p1->money+1000;
			if(p1->score2>80&&(strcmp(p1->leader,"Y")==0))
				p1->money=p1->money+850;
		}
		p1=(struct student *)malloc(sizeof(struct student));
		p2->next=p1;
	}
	p2->next=NULL;
	return(head);
}
void print(struct student *head)
{
	struct student *p1;
	int max,all=0;
	p1=head;
	max=p1->money;
	do
	{
		if(p1->money>max)
			max=p1->money;
		all=all+p1->money;
		p1=p1->next;
	}
	while(p1->next!=NULL);
	if(p1->money>max)
		max=p1->money;
	all=all+p1->money;
	p1=head;
	for(;p1->next!=NULL;)
	{
		if(p1->money==max)
		{
			printf("%s\n%d\n",p1->name,p1->money);
			break;
		}
		p1=p1->next;
	}
	printf("%d",all);
}
void print1(struct student *head)
{
	struct student *p1;
	p1=head;
	do
	{
		printf("%s %d %d %s %s %d %d\n",p1->name,p1->score1,p1->score2,p1->leader,p1->west,p1->paper,p1->money);
		p1=p1->next;
	}
	while(p1!=NULL);
}
void main()
{
	int n;
	struct student *head;
	scanf("%d",&n);	
	head=creat(n);
	/*print1(head);*/
	print(head);
}