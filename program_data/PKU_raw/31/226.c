struct student 
{
	char ID[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student *next;
};
struct student *create()
{
	struct student *head,*p1,*p2;
	p1=(struct student*)malloc(LEN);
	scanf("%s",p1->ID);
	if(strcmp(p1->ID,"end")==0){free(p1);head=NULL;}
	else
	{
		head=p1;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		p1->next=NULL;
		p2=p1;
	do
	{
		p1=(struct student*)malloc(LEN);
		p1->next=NULL;
		scanf("%s",p1->ID);
		if(strcmp(p1->ID,"end")==0){p2->next=NULL;free(p1);break;}
		else
		{
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
			p2->next=p1;
			p1->next=NULL;
			p2=p1;
		}
	}while(1);
	}
	return(head);	
}
struct student *fanxu(struct student *head)
{
	struct student *prep,*nowp,*nextp;
	prep=NULL;
	nowp=head;
	while(nowp)
	{
		nextp=nowp->next;
		nowp->next=prep;
		prep=nowp;
		nowp=nextp;
	}
	return prep;
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	while(p)
	{
		printf("%s %s %c %d %s %s\n",p->ID,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}


int main()
{
	
	struct student *head;
	head=create();
	head=fanxu(head);
	print(head);
}




