struct node
{
	int num;
	char number[20];
	char name[20];
	char sex[10];
	char age[10];
	char score[10];
	char address[20];
	struct node *next;
};
struct node * creat(int n);
struct node * insert(struct node *head,struct node * q);
void list(struct node *head);
struct node * fv(struct node * head);
int main(void)
{	
	struct node *p;
	p=creat(0);
	int i;
	for(i=1;i<1000;i++)
	{
		struct node *q;
		q=creat(i);
		if(strcmp("end",q->number)!=0)
			p=insert(p,q);
		else 
			break;
	}
	p=fv(p);
	list(p);
	return 0;
}
struct node * creat(int n)
{
	struct node *ps;
	ps=(struct node *)malloc(sizeof(struct node));
	scanf("%s %s %s %s %s %s\n",&ps->number,&ps->name,&ps->age,&ps->sex,&ps->score,&ps->address);
	fflush(stdin);
	ps->num=n;
	return(ps);
}
struct node * insert(struct node *head,struct node * q)
{
	struct node *m,*n;
	m=head;
	if(head==0)
	{
		head=q;
		q->next=0;
	}
	else
	{
		if(q->num<=head->num)
		{
			q->next=head;
			head=q;
		}
		else
		{
			while((q->num>m->num)&&(m->next!=0))
			{
				n=m;
				m=m->next;
			}
			if(q->num<=m->num)
			{
				n->next=q;
				q->next=m;
			}
			else
			{
				m->next=q;
				q->next=0;
			}
		}
	}
	return(head);
}
struct node * fv(struct node * head)
{
	struct node *p,*q,*k,*l;
	l=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->next=l;
	k=p->next;
	while(k!=0)
	{
		q=p;
		p=k;
		k=p->next;
		p->next=q;
	}
	p->next=q;
	q=p;
	while(q->num!=head->num)
		q=q->next;
	q->next=0;
	return(p);
}
void list(struct node *head)
{
	struct node *p;
	p=head;
	while(p!=0)
	{
		printf("%s %s %s %s %s %s\n",&p->number,&p->name,&p->age,&p->sex,&p->score,&p->address);
		p=p->next;
	}

}


