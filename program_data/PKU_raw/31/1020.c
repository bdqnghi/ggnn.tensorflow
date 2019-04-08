struct stu
{
	char num[1000];
	struct stu*next;
};
struct stu*f()
{
	struct stu*head;
	struct stu*p,*q;
	p=q=0;
	p=(struct stu*)malloc(l);
	p->next=q;
	gets(p->num);
	q=p;
	while(1)
	{
		p=(struct stu*)malloc(l);
		p->next=q;
		q=p;
		gets(p->num);
		if(p->num[0]=='e') break;
	}
	head=p;
	return(head);
}
void y(struct stu*head)
{
	struct stu*p,*q;
	p=q=head;
	p=q->next;
	while(p!=0)
	{
		puts(p->num);
		q=p;
		p=q->next;
	}
}
main()	
{
	y(f());
	return 0;
}
