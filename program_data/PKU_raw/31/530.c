struct q
{
	char a[100];
	struct q *last;
};
struct q * c()
{
	struct q *p1,*p2,*end;
	int t=1;
	while(0==0)
	{
		p1=(struct q *)malloc(sizeof(struct q));
		gets(p1->a);
		if(t==1)
		{
			p1->last=NULL;
			p2=p1;
			t=0;
		}
		else
		{
			if(p1->a[0]!='e')
			{
				p1->last=p2;
				p2=p1;
			}
			else
			{
				end=p2;
				break;
			}
		}
	}
	return end;
}
main()
{
	struct q *p1;
	p1=c();
	while(p1!=NULL)
	{
		puts(p1->a);
		p1=p1->last;
	}
}
