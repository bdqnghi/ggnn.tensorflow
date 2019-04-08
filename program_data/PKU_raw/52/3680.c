struct Node;
typedef struct Node *pNode; 
struct Node
{
    int x;
	pNode next;
};


pNode create()/*??head*/
{
	pNode p;
	p=(pNode)malloc(sizeof(struct Node));
	p->next=NULL;
	return p;
}

void sort(pNode head,int n)/*head???????n???*/
{
	pNode p=NULL,q=NULL,s=NULL;
    int i;
	for (i=1;i<=n;i++)
	{
	s=(pNode)malloc(sizeof(struct Node));
	scanf("%d",&s->x);
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

void outputdata(pNode p)/*??head*/
{
    p=p->next;
	while(p->next)
	{
      printf("%d ",p->x);
	  p=p->next;
    }
	printf("%d",p->x);
}


pNode inputdata(int n)/*??head?????n???*/
{
	pNode q=NULL,p=NULL,head=NULL;
	int i;
	head=create();
	q=head;
	for (i=1;i<=n;i++)
	{p=(pNode)malloc(sizeof(struct Node));
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

void del(pNode p,int k)/*??head??k???*/
{
	pNode q=NULL;
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

pNode rinputdata(int n)/*??head,????n???*/
{
	pNode q=NULL,p=NULL,head=NULL;
    int i;
	head=create();
	for (i=1;i<=n;i++)
	{
		p=(pNode)malloc(sizeof(struct Node));
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

void outputk(pNode p,int k)/*???k???*/
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

void change(pNode p,int n,int m)/*?head?n?????m???????*/
{
	int i=1;
	pNode q=NULL,s=NULL,head=NULL;
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

void found(pNode p,int k)/*??head???k???*/
{
   pNode head=p;
   int ok=1;
   p=head->next;
   while(p)
   {
	   if (k==p->x)
	   {
		   printf("%d\n",p->x);
           ok=0;
	   }
	   p=p->next;
   }
   if (ok)
	   printf("No Found!");
}

int main()
{
    int m,n;
    pNode head=NULL;
    scanf("%d %d",&n,&m);
    head=inputdata(n);
    change(head,n,m);
	outputdata(head);

	return 0;
}
