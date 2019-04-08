struct Student
{
	char name[20];
	int final;
	int evaluate;
	char office;
	char west;
	int paper;
	int money;
	struct Student *next;
};
int main()
{
	struct Student *head,*p,*best;
	head=(struct Student *)malloc(sizeof(struct Student));
	p=head;
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->final,&p->evaluate,&p->office,&p->west,&p->paper);
		p->money=0;
		if(p->final>80&&p->paper>0)
			p->money+=8000;
		if(p->final>85&&p->evaluate>80)
			p->money+=4000;
		if(p->final>90)
			p->money+=2000;
		if(p->final>85&&p->west=='Y')
			p->money+=1000;
		if(p->evaluate>80&&p->office=='Y')
			p->money+=850;
		p->next=(struct Student *)malloc(sizeof(struct Student));
		p=p->next;
	}
	int all=0;
	p=head;
	best=head;
	for(i=0;i<N;i++)
	{
		all+=p->money;
		if(p->money>best->money)
		{
			best=p;
		}
		p=p->next;
	}
	printf("%s\n%d\n%d",best->name,best->money,all);
	return 0;
}
