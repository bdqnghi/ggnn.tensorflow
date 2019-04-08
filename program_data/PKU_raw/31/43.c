
struct stu
{
	char num[15];
	char name[20];
	char sex;
	int  year;
	char score[20];
	char adr[15];
	struct stu *next;
}*p,*q,*head,*newhead,*ne;

struct stu *creat(void)
{
	char a[15];
	head=null;
	scanf("%s",&a);
	while(strlen(a)!=3)
	{
		p=(struct stu *)malloc(l);
		strcpy(p->num,a);
		scanf("%s %c %d %s %s",p->name,&p->sex,&p->year,p->score,p->adr);
		if(head==null)
			q=head=p;
		else
			q=q->next=p;
		scanf("%s",a);
	}
	q->next=null;
	return (head);
}

struct stu * change(struct stu *head)
{
	newhead=null;
	do
	{
		q=null;
		p=head;
		while(p->next!=null)
		{
			q=p;
			p=p->next;
		}
		if(newhead==null)newhead=p,ne=newhead->next=q;
		ne=ne->next=q;
		q->next=null;
	}while(head->next!=null);
	return (newhead);
}

void output(struct stu *newhead)
{
	p=newhead;
	while(p!=null)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->year,p->score,p->adr);
		p=p->next;
	}
}
int main()
{
	head=creat();
	newhead=change(head);
	output(newhead);
}











