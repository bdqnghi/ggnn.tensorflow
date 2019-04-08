struct student
{
	char *name;
	int  grade;
	int cla;
	char gugan;
	char xibu;
	int paper;
	int money;
	struct student *next;
};
void main()
{
	int n,i,sum=0,max=0;
	struct student *head,*p1,*p2,*s;
	scanf("%d",&n);
	p2=p1=(struct student *)malloc(LEN);
	p1->name=(char*)calloc(22,sizeof(char));
	head=p1;
	for(i=0;i<n;i++)
	{
		//p1=(struct student *)malloc(LEN);
		
        scanf("%s %d %d %c %c %d",p1->name,&p1->grade,&p1->cla,&p1->gugan,&p1->xibu,&p1->paper);
		p2->next=p1;
		p2=p1;
        p2->money=0;
		if (p2->grade>80&&((p2->paper)>=1)) {p2->money=p2->money+8000;sum=sum+8000;}
		if(p2->grade>85&&p2->cla>80)  {p2->money=p2->money+4000;sum=sum+4000;}
		if(p2->grade>90) {p2->money=p2->money+2000;sum=sum+2000;}
		if(p2->grade>85&&p2->xibu=='Y')  {p2->money=p2->money+1000;sum=sum+1000;}
		if(p2->cla>80&&p2->gugan=='Y') {p2->money=p2->money+850;sum=sum+850;}
		if(max<p2->money) max=p2->money;
		p1=(struct student *)malloc(LEN);
		p1->name=(char*)calloc(22,sizeof(char));
		//scanf("%s %d %d %c %c %d",p1->name,&p1->grade,&p1->cla,&p1->gugan,&p1->xibu,&p1->paper);
	}
	
		p2->next=NULL;
		s=head;
		for(i=0;s->money!=max;i++)
			s=s->next;
		printf("%s\n%d\n%d",s->name,max,sum);
}