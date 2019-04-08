struct student
{
	char num[10];
	char name[20];
	char c;
	int age;
	char score[10];
	char addr[20];
	struct student*next;
};

void main()
{
	struct student *p1,*p2,*p,*head;

	p1=(struct student*)malloc(LEN);
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->c,&p1->age,p1->score,p1->addr);
	p1->next=NULL;
	do
	{
		p2=(struct student*)malloc(LEN);
		scanf("%s",p2->num);
		if(strcmp(p2->num,"end")==0)
		{
			head=p1;
			break;
		}
		else
		{
		scanf("%s %c %d%s%s",p2->name,&p2->c,&p2->age,p2->score,p2->addr);
		p2->next=p1;
		p1=p2;
		}
	}while(strcmp(p2->num,"end")!=0);

	p=head;
	do
	{
		if(p->next==NULL)
			break;
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->c,p->age,p->score,p->addr);
		if(p->next!=NULL)
			p=p->next;
	}while(p->next!=NULL);
	printf("%s %s %c %d %s %s\n",p->num,p->name,p->c,p->age,p->score,p->addr);

}
