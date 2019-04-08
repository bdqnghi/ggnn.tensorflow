struct student
{
	char num[100];
	struct student *next;
};

main()
{
	int n,i;
	struct student *head,*p1,*p2,*p;
	n=0;p1=p2=(struct student*) malloc(LEN);
	gets(p1->num);
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*) malloc(LEN);
		gets(p1->num);
	}
	p2->next=NULL;
	for(i=0;i<n;i++)
	{
		p=head;
		while(p->next!=NULL)
		{
			p1=p;
			p=p->next;
		}
		printf("%s\n",p->num);
		p1->next=NULL;
	}
}