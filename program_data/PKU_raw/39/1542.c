struct student
{
	char name[20];
	int qimo;
	int pingyi;
	char ganbu;
	char xibu;
	int lunwen;
	int zong;
	struct student *next;
}*head,*p1,*p2,*max;

int zong(struct student *p1)
{
	int zong=0;
	struct student *p;
	p=p1;
	if(p->qimo>80&&p->lunwen>=1) zong+=8000;
	if(p->qimo>85&&p->pingyi>80) zong+=4000;
	if(p->qimo>90) zong+=2000;
	if(p->qimo>85&&p->xibu=='Y') zong+=1000;
	if(p->pingyi>80&&p->ganbu=='Y') zong+=850;
	return zong;
}

struct student *find(struct student *head)
{
	struct student *p,*max;
	p=head->next;
	max=head;
	while(p)
	{
		if(p->zong>max->zong)
			max=p;
		p=p->next;
	}
	return max;
}


int main()
{
	int zong(struct student *p1);
	struct student *find(struct student *head);

	int n,m=0;
	scanf("%d",&n);

	p1=(struct student*)malloc(Len);
	scanf("%s %d %d %c %c %d",p1->name,&p1->qimo,&p1->pingyi,&p1->ganbu,&p1->xibu,&p1->lunwen);
	p1->zong=zong(p1);
    m+=p1->zong;
	n--;
	p1->next=NULL;

	head=p1;
	p2=p1;

	while(n)
	{
		p1=(struct student*)malloc(Len);
	    scanf("%s %d %d %c %c %d",p1->name,&p1->qimo,&p1->pingyi,&p1->ganbu,&p1->xibu,&p1->lunwen);
		p1->zong=zong(p1);
		m+=p1->zong;
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		n--;
	}

	max=find(head);

	printf("%s\n%d\n%d",max->name,max->zong,m);

	return 0;
}