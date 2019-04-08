struct st
{
	char s[11];
	int n;
	struct st *next;
};
struct st *creat(int m)
{
	struct st *head,*p1,*p2;
	int i;
	for(i=0;i<m;i++)
	{
		p1=(struct st *)malloc(len);
		if(i==0)head=p1;
		else p2->next=p1;
		scanf("%s %d",p1->s,&p1->n);
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
void line(struct st *head,int m)
{
	struct st *p,*p1,*p2;
	p=head;
	int i,j,t;
	for(i=0;i<m;i++)
	{
		p1=p;
		p2=p1->next;
		for(j=1;j<m;j++)
		{
			char ss[11]={'\0'};
			if(p1->n>=60)
			{
				if(p2->n>p1->n)
				{
					strcpy(ss,p1->s);
					strcpy(p1->s,p2->s);
					strcpy(p2->s,ss);
					t=p1->n;
					p1->n=p2->n;
					p2->n=t;
				}
			}
			else
			{
				if(p2->n>=60)
				{
					strcpy(ss,p1->s);
					strcpy(p1->s,p2->s);
					strcpy(p2->s,ss);
					t=p1->n;
					p1->n=p2->n;
					p2->n=t;
				}
			}
			p1=p1->next;
			p2=p2->next;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%s\n",p->s);
		p=p->next;
	}
}
void main()
{
	struct st *p;
	void line(struct st *head,int m);
	struct st *creat(int m);
	int m,i,j;
	scanf("%d",&m);
	p=creat(m);
	line(p,m);
}
