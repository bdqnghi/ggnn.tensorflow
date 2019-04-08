struct student
{
	char infor[100];
	struct student *next;
}*p1,*p2;
struct student *creat(void)
{
	struct student *head;
	head=0;
	p1=0;
	p2=0;
	while(1)
	{
		p1=(struct student *)malloc(LEN);
		gets(p1->infor);
		if(strcmp(p1->infor,"end")==0)
			break;
		if(head==0)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
	}
	p2->next=0;
	return(head);
}
struct student *turnback(struct student *head)
{
	struct student *newhead=0,*p,*q,*r;
	do
	{	
		p=head;
		q=0;
		while(p->next!=0)
		{
			q=p;
			p=p->next;
		}
		if(newhead==0)
		{
			newhead=p;
			newhead->next=q;
		}
		else
		{
			r=p;
			r->next=q;
		}
		q->next=0;
	}while(head->next!=0);
	return(newhead);
}

void output(struct student *head)
{
	struct student *p;
	for(p=head;p->next!=0;p=p->next)
		printf("%s\n",p->infor);
	printf("%s\n",p->infor);
}
void main()
{
	struct student *head;
	head=creat();
	head=turnback(head);
	output(head);
}





	
	

