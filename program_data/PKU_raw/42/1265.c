
struct num
{
	int n;
	struct num * next;
};
int a;

struct num *creat()
{
	struct num *head;
	struct num *p1,*p2;
	int i;
	p1=p2=(struct num*)malloc(LEN);
	scanf("%d",&p1->n);
	head=p1;
	for(i=1;i<a;i++)
	{
		p2=p1;
		p1=(struct num*)malloc(LEN);
		p2->next=p1;
		scanf("%d",&p1->n);
	}
	p2=p1;
	p2->next=null;
	return head;
}

struct num *del(struct num *head,int a,int m)
{
	struct num *p1,*p2;int i;
	if(head==null) return head;
	p1=head;
	for(i=0;i<a;i++)
	{
		if(m!=p1->n&&p1->next!=null)
		{
			p2=p1;p1=p1->next;
		}
		else if(m==p1->n)
		{
			//printf("%d",p1->n);
			if(p1==head) head=p1->next;
			else p2->next=p1->next;
			p1=p1->next;
		}
	}
	return head;
}

void print(struct num *head)
{
	struct num *p;
	p=head;
	if(head!=null)
	{
		do
		{
			if(p->next==null) printf("%d",p->n);
			else printf("%d ",p->n);
			p=p->next;
		}while(p!=null);
	}
}

void main()
{
	struct num *creat();
	struct num *del(struct num *head,int a,int m);
	void print(struct num *head);
	struct num *head;int m;
	scanf("%d",&a);
	head=creat();	//print(head);
	scanf("%d",&m);
	head=del(head,a,m);
	print(head);
}

 
