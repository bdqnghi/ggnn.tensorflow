
struct student
{
	char id[100];
	char name[100];
	char sex;
	int age;
	char score[100000];
	char address[100];
	struct student *next;
};

struct student *creat(void)
{
	struct student *head,*p,*q;
	q=NULL;
	head=(struct student *)malloc(len);
	p=head;
	while(1)
	{
		q=p;
		scanf("%s",&p->id);
		if(strcmp(p->id,"end")==0)
			break;
		scanf("%s %c %d %s %s",&p->name,&p->sex,&p->age,&p->score,&p->address);
		p=(struct student *)malloc(len);
		q->next=p;
	}
	q->next=NULL;
	return (head);
}

struct student *turn(struct student *head)
{
	struct student *p,*q,*t,*newhead=NULL;
	while(head->next !=NULL)
	{
		q=NULL;
		p=head;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		if(newhead==NULL)
		{
			newhead=p;
			t=newhead->next=q;
		}
		t=t->next=q;
		q->next=NULL;
	}
	return newhead;
}

void put(struct student *head)
{
	struct student *p;
	for(p=head;p!=NULL;p=p->next)
	{
		if(strcmp(p->id,"end")==0)
			continue;
		printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->address);
	}
}

void main()
{
	struct student *head;
	head=creat();
	head=turn(head);
	put(head);
}