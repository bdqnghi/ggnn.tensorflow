struct info
{
	char name[20];
	float finalscore;
	float averscore;
	char leader;
	char westerner;
	int essay;
	struct info *next;
};
int n;
struct info *setup(void)
{
	int t=0;
	struct info *head,*p1,*p2;
	head=p2=p1=(struct info*)malloc(sizeof(struct info));
	scanf("%s %f %f %c %c %d",p1->name,&p1->finalscore,&p1->averscore,&p1->leader,&p1->westerner,&p1->essay);
	while(t<n)
	{
		t++;
		p1=(struct info*)malloc(sizeof(struct info));
		p2->next=p1;
		scanf("%s %f %f %c %c %d",p1->name,&p1->finalscore,&p1->averscore,&p1->leader,&p1->westerner,&p1->essay);
		p2=p1;
	}	
	return head;
}
void main()
{
	long max=0,total=0,t,i=0;
	struct info *p,*excellent;
	scanf("%d",&n);
	p=setup();
	for(i=0;i<n;i++)
	{
		t=0;
		if(p->finalscore>80&&p->essay>0)
			t+=8000;
		if(p->finalscore>85&&p->averscore>80)
			t+=4000;
		if(p->finalscore>90)
			t+=2000;
		if(p->westerner=='Y'&&p->finalscore>85)
			t+=1000;
		if(p->leader=='Y'&&p->averscore>80)
			t+=850;
		if(t>max)
		{
			max=t;
			excellent=p;
		}
		total+=t;
		p=p->next;
	}
	printf("%s\n%ld\n%ld\n",excellent->name,max,total);
}

