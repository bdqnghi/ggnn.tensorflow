void main()
{
	struct student
	{
		char info[1000];
		struct student *pre,*next;
	} *head,*tail,*p;
	int l;
	l=sizeof(struct student);
	head=(struct student*)malloc(l);
	p=head;
	p->pre=NULL;
	p->next=NULL;
	for (;;)
	{
		gets(p->info);
		if (strcmp(p->info,"end")==0) {tail=p;break;}
		p->next=(struct student*)malloc(l);
		(p->next)->pre=p;
		(p->next)->next=NULL;
		p=p->next;
	}
	p=tail;
	for (;;)
	{
		if (!(p->pre)) {free(p);break;}
		puts((p->pre)->info);
		p=p->pre;
		free(p->next);
	}
}