
int main()
{
	struct student
	{
		char No[9];
		char name[20];
		char sex;
		int age;
		char score[8];
		char add[20];
		struct student *next,*last;
	};
	struct student *p,*head,*tail;
	p=(struct student*)malloc(sizeof(struct student));
	head=p;
	head->last=NULL;
	do
	{
		scanf("%s",p->No);
		if(p->No[0]=='e')
		{
			p->next=NULL;
			tail=p->last;
		}
		else
		{
			scanf("%s %c%d%s%s",p->name,&p->sex,&p->age,&p->score,p->add);
			p->next=(struct student*)malloc(sizeof(struct student));
			p->next->last=p;
		}
		p=p->next;
	}while(p!=NULL);
	p=tail;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->No,p->name,p->sex,p->age,p->score,p->add);
		p=p->last;
	}
	return 0;
}
