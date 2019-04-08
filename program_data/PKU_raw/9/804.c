typedef struct data *pdata;

struct data
{
	char a[20];
	int b;
	pdata next;
};


pdata sort(int n)
{
pdata p=NULL,q=NULL,s=NULL,head=NULL;
head=(pdata)malloc(sizeof(struct data));
head->next=NULL;
int i;
for (i=0;i<n;i++)
{
s=(pdata)malloc(sizeof(struct data));
scanf("%s %d",s->a,&(s->b));
if(s->b>=60)
{
	q=head;
	p=head->next;
	while (p)
	{
		if(p->b<s->b) break;
		q=q->next;
		p=p->next;
	}
	q->next=s;
	s->next=p;
}
else 
{
	q=head;
	p=head->next;
	while(p)
	{
		q=q->next;
		p=p->next;
	}
	q->next=s;
	s->next=NULL;
}
}

return head;
}


int main()
{
	int n,i;
	pdata p,head;
	scanf("%d",&n);
	head=sort(n);
	p=head->next;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->a);
		p=p->next;
	}
}