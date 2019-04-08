

struct wr
{ char w;
  int k;
  int num[1000];
  struct wr* next;  
};

struct wr * creat(void)
{
	struct wr *head,*p1,*p2,a;
	char i;
	head=p2=(struct wr *)malloc(sizeof(struct wr));
	head->w='A';
	head->k=0;
	for(i='B';i<='Z';i++)
	{
		p1=(struct wr *)malloc(sizeof(struct wr));
        p1->w=i;
		p1->k=0;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return head;
}

void add(char a,int b,struct wr * head)
{
	struct wr *p;
	for(p=head;p!=NULL;p=p->next)
	if(a==p->w)
	{(p->k)++;
	  *(p->num+p->k-1)=b;
	}
}

void max(struct wr * head)
{ 
	struct wr *p1,t;
	for(p1=head->next;p1!=NULL;p1=p1->next)
		 if(p1->k>head->k)
		 *head=*p1;
}

void main()
{
	struct wr *head,*t;
	int n,*no,i;
	char *ws,*p;
	ws=(char *)malloc(sizeof(char)*27);
	head=creat();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&no);
		gets(ws);
		for(p=ws;*p!='\0';p++)
			add(*p,no,head);
	}
    max(head);
	printf("%c\n",head->w);
	printf("%d\n",head->k);
	for(i=0;i<head->k;i++)
		printf("%d\n",*(head->num+i));
	
}