struct stu
{int n;
 int a;
 int m;
 struct stu *next;
};
int n,l;
struct stu *creat(void)
{
	struct stu *head;
	struct stu *p,*q;
	n=0;
	p=q=(struct stu *)malloc(Len);
	scanf("%d %d %d",&p->n,&p->a,&p->m);
	head=Null;
	for(;n<l-1;)
	{
		n++;
		if(n==1) head=p;
		else q->next=p;
		q=p;
		p=(struct stu *)malloc(Len);
		scanf("%d %d %d",&p->n,&p->a,&p->m);
	}
	q->next=Null;
	return(head);
}
void main()
{
	int s=0;
	struct stu *p,*q,*c,*d,*head;
	scanf("%d",&l);
	head=p=q=creat();
	for(;;)
	{
		if((p->m+p->a)>s) 
		{
			s=p->m+p->a;
			c=p;
			d=q;
		}
		q=p;
		p=q->next;
		if(p->next==Null) break;
	}
	printf("%d %d\n",c->n,s);
	if(d==head)
		head=((c->next)->next);
	else
		d->next=c->next;
	p=q=head;
	s=0;
	for(;;)
	{
		if((p->m+p->a)>s) 
		{
			s=p->m+p->a;
			c=p;
			d=q;
		}
		q=p;
		p=p->next;
		if(p->next==Null) break;
	}
	printf("%d %d\n",c->n,s);
	if(d==head)
		head=p=q=((c->next)->next);
	else
		d->next=c->next;
	p=q=head;
	s=0;
	for(;;)
	{
		if((p->m+p->a)>s) 
		{
			s=p->m+p->a;
			c=p;
			d=q;
		}
		q=p;
		p=p->next;
		if(p->next==Null) break;
	}
	printf("%d %d\n",c->n,s);
}



		