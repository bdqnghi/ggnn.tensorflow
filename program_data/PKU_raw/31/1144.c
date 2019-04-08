struct stu
{
	char a[1000];
	struct stu *next;
};
void main()
{
	struct stu *head,*p1,*p2;
	p1=p2=(struct stu*)malloc(LEN);
	head=p1;
	p1->next=NULL;
	gets(p1->a);
	while (strcmp(p1->a,"end")!=0)
	{
			p1=(struct stu*)malloc(LEN);
			gets(p1->a);
			head=p1;
			p1->next=p2;
			p2=p1;
	}
	p1=head->next;
	while (p1!=NULL)
	{
		puts(p1->a);
		p1=p1->next;
	}
}