struct student
{
	char name[20];
	int qimo;
	int banpin;
	char ganbu;
	char xibu;
	int lunwen;
	double sum;
	struct student *next;
};
int n;
double total=0;
struct student *create()
{
	struct student *p1,*p2,*head;
	p1=(struct student*)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->qimo,&p1->banpin,&p1->ganbu,&p1->xibu,&p1->lunwen);
	p1->sum=0;
    if(p1->qimo>80&&p1->lunwen>0)p1->sum=p1->sum+8000;
	if(p1->qimo>85&&p1->banpin>80)p1->sum=p1->sum+4000;
	if(p1->qimo>90)p1->sum=p1->sum+2000;
	if(p1->xibu=='Y'&&p1->qimo>85)p1->sum=p1->sum+1000;
    if(p1->ganbu=='Y'&&p1->banpin>80)p1->sum=p1->sum+850;
	total=total+p1->sum;

	head=p1;
	p2=p1;
	p1->next=NULL;
	int i=1;
	do
	{
		if(i==n)break;
			p1=(struct student*)malloc(LEN);
			scanf("%s %d %d %c %c %d",p1->name,&p1->qimo,&p1->banpin,&p1->ganbu,&p1->xibu,&p1->lunwen);
	        p1->sum=0;
            if(p1->qimo>80&&p1->lunwen>0)p1->sum=p1->sum+8000;
	        if(p1->qimo>85&&p1->banpin>80)p1->sum=p1->sum+4000;
	        if(p1->qimo>90)p1->sum=p1->sum+2000;
	        if(p1->xibu=='Y'&&p1->qimo>85)p1->sum=p1->sum+1000;
            if(p1->ganbu=='Y'&&p1->banpin>80)p1->sum=p1->sum+850;
	        total=total+p1->sum;

			p2->next=p1;
			p2=p1;
			p1->next=NULL;
			i++;
			
		}while(1);
	    return(head);
}
struct student *findmax(struct student *head)
{
	struct student *p,*max;
	p=head->next;
	max=head;
	while(p!=NULL)
	{
		if(p->sum>max->sum)max=p;
		p=p->next;
	}
	return(max);
}



int main()
{
	scanf("%d",&n);
	struct student *head,*max;
	head=create();
	max=findmax(head);
	printf("%s\n%g\n%g",max->name,max->sum,total);
}


