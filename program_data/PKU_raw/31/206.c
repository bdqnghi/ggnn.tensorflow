struct student
{
	char a[100];
	struct student *next;
	struct student *last;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=(struct student *)malloc(sizeof(struct student));
	gets(p1->a);
	p1->last=NULL;
	int i;
	for(i=1;strcmp(p1->a,"end")!=0;i++)
	{
		if(i==1);
		else {p2->next=p1;p1->last=p2;}
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		gets(p1->a);
	}
	p2->next=NULL;head=p2;
	return(head);
}
main()
{
	struct student *head,*p;
	head=creat();
	p=head;
	int i;
	for(i=0;p->last!=NULL;i++)
	{
		printf("%s\n",p->a);
		p=p->last;
	}
	printf("%s",p->a);
}
