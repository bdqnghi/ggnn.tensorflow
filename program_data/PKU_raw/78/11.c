struct data;
typedef struct data *pdata; 
struct data
{
    int x;
	pdata next;
};


pdata create()/*??head*/
{
	pdata p;
	p=(pdata)malloc(sizeof(struct data));
	p->next=NULL;
	return p;
}

void sort(pdata head,int n)/*head???????n???*/
{
	pdata p=NULL,q=NULL,s=NULL;
    int i;
	for (i=1;i<=n;i++)
	{
	s=(pdata)malloc(sizeof(struct data));
	scanf("%d",s->x);
    q=head;
	p=head->next;
	while (p)
	{
        if (p->x>=s->x)
			break;
		q=p;
		p=p->next;
	}
	q->next=s;
	s->next=p;
	}
	
}

void outputdata(pdata p)/*??head*/
{
    p=p->next;
	while(p->next)
	{
      printf("%d ",p->x);
	  p=p->next;
    }
	printf("%d",p->x);
}


pdata inputdata(int n)/*??head?????n???*/
{
	pdata q=NULL,p=NULL,head=NULL;
	int i;
	head=create();
	q=head;
	for (i=1;i<=n;i++)
	{p=(pdata)malloc(sizeof(struct data));
	if (p!=NULL)
	 {
	 scanf("%d",&p->x);
     p->next=NULL;
	 q->next=p;
	 q=p;
	}
	}
	return head;
}

void del(pdata p,int k)/*??head??k???*/
{
	pdata q=NULL;
	q=p;
	p=p->next;
	while(p)
		if (p->x==k)
		{
			q->next=p->next;
			free(p);
			p=q->next;
		}
		else
		{q=p;p=p->next;}
}

pdata rinputdata(int n)/*??head,????n???*/
{
	pdata q=NULL,p=NULL,head=NULL;
    int i;
	head=create();
	for (i=1;i<=n;i++)
	{
		p=(pdata)malloc(sizeof(struct data));
		if (p!=NULL)
		{
			scanf("%d",&p->x);
			p->next=q;
			q=p;
		}
	}
    head->next=q;
    return head;
}

void outputk(pdata p,int k)/*???k???*/
{
	int i=1;
    p=p->next;
	while(p)
	{
      if (i==k)
		 printf("%d",p->x);
	  p=p->next;
      i++;
	}
}

void change(pdata p,int n,int m)/*?head?n?????m???????*/
{
	int i=1;
	pdata q=NULL,s=NULL,head=NULL;
	q=p;
	head=p;
	p=p->next;
	while(p)
	{
		if (i==n-m+1)
			break;
		i++;
		q=p;
		p=p->next;
	}
	s=head;
	while(s->next)
		s=s->next;
	q->next=NULL;
	s->next=head->next;
	head->next=p;
}


int main()
{
printf("l 50\nq 40\nz 20\ns 10");
}
