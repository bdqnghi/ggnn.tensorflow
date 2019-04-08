struct student
{
	char name[20];
	int score;
	int ping;
	char zhiwu;
	char xibu;
	int lun;
	int money;
	struct student *next;
};
int n;
struct student *creat(int n)
{
	struct student *head,*p1,*p2;
	int i=1;
	head=p1=(struct student *)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->score,&p1->ping,&p1->zhiwu,&p1->xibu,&p1->lun);

    p1->money=0;
	if(p1->score>80&&p1->lun>=1)p1->money=p1->money+8000;
	if(p1->score>85&&p1->ping>80)p1->money=p1->money+4000;
    if(p1->score>90)p1->money=p1->money+2000;
    if(p1->score>85&&p1->xibu=='Y')p1->money=p1->money+1000;
    if(p1->zhiwu=='Y'&&p1->ping>80)p1->money=p1->money+850;
    head=p1;
	while(i<=n-1)
	{
		i=i+1;
		p2=(struct student *)malloc(LEN);
		scanf("%s %d %d %c %c %d",p2->name,&p2->score,&p2->ping,&p2->zhiwu,&p2->xibu,&p2->lun);
		p2->money=0;
		if(p2->score>80&&p2->lun>=1)p2->money=p2->money+8000;
		if(p2->score>85&&p2->ping>80)p2->money=p2->money+4000;
		if(p2->score>90)p2->money=p2->money+2000;
		if(p2->score>85&&p2->xibu=='Y')p2->money=p2->money+1000;
		if(p2->zhiwu=='Y'&&p2->ping>80)p2->money=p2->money+850;
		p1->next=p2;
		p1=p2;
	}
	p1->next=0;
	return(head);
}
void main()
{
	struct student *head,*p,*t;
	long n,i,max=0,sum=0;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	for(i=1;i<=n;i++)
	{
		sum=sum+p->money;
		if(p->money>max){max=p->money;t=p;}
		p=p->next;
	}
	printf("%s\n%d\n%ld\n",t->name,t->money,sum);
}