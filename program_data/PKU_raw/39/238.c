
struct xinxi
{   
	char ming[22];
	int  qimo;
	int pingyi;
	char guan;
	char xibu;
	int lunwen;
   int award;
   struct xinxi *next;
};

void main()
{
	struct xinxi *head,*pt,*p,*x;
	int i,n,t;
	int awardmax,awardsum;

	scanf("%d",&n);


	p=(struct xinxi *)malloc(sizeof(struct xinxi));
	scanf("%s %d %d %c %c %d\n",p->ming,&p->qimo,&p->pingyi,&p->guan,&p->xibu,&p->lunwen);
	
	pt=p;
	head=NULL;
    t=1;
	while(t<n)
	{
		if(t==1)head=p;
		if(t>1)pt->next=p;

		pt=p;
		p=(struct xinxi *)malloc(sizeof(struct xinxi));
		

		t=t+1;
        scanf("%s %d %d %c %c %d",p->ming,&p->qimo,&p->pingyi,&p->guan,&p->xibu,&p->lunwen);
	
	}

	pt->next=p;
	p->next=NULL;


	x=head;
while(x!=NULL)
	{
		x->award=0;
		if(x->qimo>80&&x->lunwen!=0)x->award=x->award+8000;
		if(x->qimo>85&&x->pingyi>80)x->award=x->award+4000;
		if(x->qimo>90)x->award=x->award+2000;
		if(x->qimo>85&&x->xibu=='Y')x->award=x->award+1000;
		if(x->pingyi>80&&x->guan=='Y')x->award=x->award+850;

		x=x->next;
	
}
awardsum=0;
awardmax=0;
x=head;

while(x!=NULL)
{
	awardsum=x->award+awardsum;

if(x->award>awardmax)awardmax=x->award;	
	x=x->next;
}

for(x=head;x->award!=awardmax;x=x->next);
printf("%s\n",x->ming);
printf("%d\n",x->award);
printf("%d",awardsum);
}
