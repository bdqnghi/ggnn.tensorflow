main()
{
	struct a
	{
		char s[100];
		struct a *next;
	};
	int len=sizeof(struct a),n=0;
	struct a *p1,*p2,*head,*p;
	p1=p2=(struct a *)malloc(len);
	head=NULL;
	gets(p1->s);
	while(strcmp(p1->s,"end")!=0)
	{
		n++;
		if(n==1)
			head=p1;
		else
			p1->next=p2;
		p2=p1;
		p1=(struct a *)malloc(len);
		gets(p1->s);
	}
	head->next=NULL;
	p=p2;
	if(head!=NULL)
	{
		do
		{
			puts(p->s);
			p=p->next;
		}while(p!=NULL);
	}
}
