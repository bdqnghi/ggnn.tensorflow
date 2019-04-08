
struct stru
{
	struct stru *pre;
	char msg[200];
	struct stru *next;
}*head, *p,*q,*end;

void creat()
{
	char temp[200];
	p=q=(struct stru *)malloc(LEN);
	head=p;
	head->pre=NULL;
	gets(p->msg);
	while(1)
	{
		gets(temp);
		if(strcmp(temp,"end")!=0)
		{p=(struct stru *)malloc(LEN);
		strcpy(p->msg,temp);
		p->pre=q;
		q->next=p;
		q=p;}
		else
			break;
	}
	q->next=NULL;
	end=q;
}

void print(struct stru *end)
{
	for(p=end;p!=NULL;p=p->pre)
		printf("%s\n",p->msg);
}

void main()
{
	creat();
	print(end);
}
