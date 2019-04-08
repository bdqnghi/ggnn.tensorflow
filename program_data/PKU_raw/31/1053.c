struct node
{
	char num[20];
	char name[20];
	char gender;
	int age;
	char score[10];
	char addr[20];
	struct node *next;
	struct node *back;
};
void main()
{
	char scan[100],constant[]="end";
	struct node beginning,*head,*p,*ending,*t;
	int count=1,i;
	head=&beginning;
	beginning.next=NULL;
	beginning.back=NULL;
	p=head;
	ending=p;
	scanf("%s %s %c %d %s %s",beginning.num,beginning.name,&beginning.gender,&beginning.age,beginning.score,beginning.addr);
	scanf("%s",scan);
	while(strcmp(scan,constant)!=0)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		t=p;
		p=p->next;
		strcpy(p->num,scan);
		scanf("%s %c %d %s %s",p->name,&p->gender,&p->age,p->score,p->addr);
		p->back=t;
		ending=p;
		scanf("%s",scan);
		count++;
	}
	p=ending;
	for(i=1;i<=count;i++)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->gender,p->age,p->score,p->addr);
		p=p->back;
	}
}
