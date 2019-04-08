struct student
{
	char name[20];
	int score1;
	int score2;
	char lead;
	char west;
	int paper;
	int sch;
	struct student *next;
};
void main()
{
	struct student *p0,*p1,*p2,*head;
	int n,k,i;
	scanf("%d",&n);
	p1=(struct student *)malloc(sizeof(struct student));
	p1->sch=0;
	scanf("%s %d %d %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->lead,&p1->west,&p1->paper);
	if((p1->score1>80)&&(p1->paper>0))
		p1->sch=p1->sch+8000;
	if((p1->score1>85)&&(p1->score2>80))
		p1->sch=p1->sch+4000;
	if(p1->score1>90)
		p1->sch=p1->sch+2000;
	if((p1->score1>85)&&(p1->west=='Y'))
		p1->sch=p1->sch+1000;
	if((p1->score2>80)&&(p1->lead=='Y'))
		p1->sch=p1->sch+850;
	head=p1;
	p1->next=NULL;
	for(i=1;i<n;i++)
	{
		p1=head;
		p0=(struct student *)malloc(sizeof(struct student));
		scanf("%s %d %d %c %c %d",p0->name,&p0->score1,&p0->score2,&p0->lead,&p0->west,&p0->paper);
		p0->sch=0;
		if((p0->score1>80)&&(p0->paper>0))
			p0->sch=p0->sch+8000;
		if((p0->score1>85)&&(p0->score2>80))
			p0->sch=p0->sch+4000;
		if(p0->score1>90)
			p0->sch=p0->sch+2000;
		if((p0->score1>85)&&(p0->west=='Y'))
			p0->sch=p0->sch+1000;
		if((p0->score2>80)&&(p0->lead=='Y'))
			p0->sch=p0->sch+850;
		while((p0->sch<=p1->sch)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->sch>p1->sch)
		{
			if(head==p1)
				head=p0;
			else p2->next=p0;
			p0->next=p1;
		}
		else 
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	k=0;
	p1=head;
	while(p1!=NULL)
	{
		k=k+p1->sch;
		p1=p1->next;
	}
	printf("%s\n%d\n%d",head->name,head->sch,k);
}