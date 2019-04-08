struct person
{
	char c[10];
	int a;
	struct person *next;
};
int main()
{
	int i,n;
	struct person *head,*p1,*p2,*p,*p0,*p3;
	scanf("%d",&n);
	i=0;
	head=NULL;
	while(i<n)
	{
		p1=(struct person*)malloc(len);
	    scanf("%s %d",p1->c,&p1->a);
		if(i==0) { head=p1;p2=p1;}
		else
		{
			p2->next=p1;
			p2=p1;
		}
		i++;
	}
	p2->next=NULL;
	for(i=0;i<n;i++)
	{
		p=p0=head;
		while(p!=NULL)
		{
			if(p->a>p0->a) p0=p;
			p=p->next;
		}
		if(p0->a>=60)
		{
			printf("%s\n",p0->c);
			p=head;
			while(p->a!=p0->a)
			{
				p3=p;
				p=p->next;
			}
			if(p==head) head=p->next;
			else p3->next=p->next;
		}
		else
		{
			printf("%s\n",head->c);
			head=head->next;
		}
	}
}
