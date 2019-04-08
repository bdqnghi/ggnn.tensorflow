void main()
{
	struct student
	{
	char a[100];
	struct student * next;
	};
	struct student * head;
	struct student * p1,* p2;
	p1=p2=(struct student * )malloc(LEN);
	gets(p1->a);
	p1->next=0;
	while(strcmp(p1->a,"end"))
	{
		head=p1;
		p2=p1;
		p1=(struct student * )malloc(LEN);
		gets(p1->a);
		p1->next=p2;
	}
	for(p1=head;p1!=0;p1=p1->next)
		printf("%s\n",p1->a);	
}