struct stu
{
	char name[25];
	int score;
	int clas;
	char job;
	char west;
	int paper;
	int sum;
	struct stu*next;
};

void main()
{
	int n,m=0,max=0,all=0;
	char c[25]={'\0'};
	scanf("%d",&n);
	struct stu*p1,*p2,*head;
	struct stu*p;

	p1=(struct stu*)malloc(LEN);
	scanf("%s%d%d %c %c %d",p1->name,&p1->score,&p1->clas,&p1->job,&p1->west,&p1->paper);
	p1->sum=0;
	head=NULL;

	while(n)
	{
		m+=1;
		if(m==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct stu*)malloc(LEN);
		scanf("%s%d%d %c %c %d",p1->name,&p1->score,&p1->clas,&p1->job,&p1->west,&p1->paper);
		p1->sum=0;
		n--;
	}
	p2->next=NULL;

	p=head;
	while(p)
	{
		if(p->clas>80)
		{
			if(p->job=='Y')
				p->sum+=850;
			if(p->score>85)
				p->sum+=4000;
		}
		if(p->score>80)
		{
			if(p->paper)
				p->sum+=8000;
			if(p->score>85)
			{
				if(p->west=='Y')
					p->sum+=1000;
			    if(p->score>90)
					p->sum+=2000;
			}
		}
		if(p->sum>max)
		{
			max=p->sum;
			strcpy(c,p->name);
		}
		all+=p->sum;
		p=p->next;
	}
	puts(c);
	printf("%d\n%d",max,all);
}
