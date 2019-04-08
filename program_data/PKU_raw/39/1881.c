struct student
{
	char name[50];
	int mark1;
	int mark2;
	char gan;
	char west;
	int paper;
	int money;
	struct student *next;
};
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	struct student *head,*p,*q;
	head=(struct student*)malloc(sizeof(struct student));
	head->next=NULL;
	p=head;
	for(i=0;i<n;i++)
	{
        q=(struct student*)malloc(sizeof(struct student));
		q->next=NULL;
		scanf("%s %d %d %c %c %d",q->name,&q->mark1,&q->mark2,&q->gan,&q->west,&q->paper);
		q->money=0;
		if(q->mark1>80&&q->paper>0)
			q->money=q->money+8000;
		if(q->mark1>85&&q->mark2>80)
			q->money=q->money+4000;
		if(q->mark1>90)
			q->money=q->money+2000;
		if(q->mark1>85&&q->west=='Y')
			q->money=q->money+1000;
		if(q->mark2>80&&q->gan=='Y')
			q->money=q->money+850;
		sum=sum+q->money;
		p->next=q;
		p=q;
	}
	p=head->next;
	q=p->next;
    while(q!=NULL)
	{
		if(p->money<q->money)
			head->next=q;
		q=q->next;
		p=head->next;
	}
	p=head->next;
	printf("%s\n",p->name);
	printf("%d\n",p->money);
    printf("%d\n",sum);
}