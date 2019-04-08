int n;

struct stu
{
	int xh;
	int yw;
	int sx;
	int all;
	struct stu*next;
};
struct stu *a,*b,*c,q,t,r;
struct stu*creat()
{
	struct stu *head;
	struct stu *p1,*p2;
	int i;
	p1=p2=(struct stu*)malloc(sizeof(struct stu));
	scanf("%d%d%d",&p1->xh,&p1->yw,&p1->sx);
	p1->all=p1->yw+p1->sx;
	head=p1;
	a=b=c=head;
	for(i=1;i<n;i++)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
		scanf("%d%d%d",&p1->xh,&p1->yw,&p1->sx);
		p1->all=p1->yw+p1->sx;
		if(p1->all>a->all)
		{
			c=b;
			b=a;
			a=p1;
		}
		else
	
			if(p1->all>b->all)
			{
				c=b;
			    b=p1;
			}
			else
			{
				if(p1->all>c->all)
					c=p1;
			}

	}p2->next=NULL;
	return head;
}

void main()
{
	
	struct stu *p;
	a=&q;b=&t;c=&r;
	scanf("%d",&n);
	p=creat();
	printf("%d %d\n%d %d\n%d %d\n",a->xh,a->all,b->xh,b->all,c->xh,c->all);
}


