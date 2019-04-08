struct student
{
	char c[60];
	struct student *next;
};
struct student *creat(void)
{
	struct student *head,*p1;
	p1=(struct student *) malloc(LEN);
	head=p1;
	head->next=NULL;
	gets(p1->c);
	while(strcmp(p1->c,"end"))
	{
	p1=(struct student *) malloc(LEN);
		gets(p1->c);
	p1->next=head;
	head=p1;
	}
	return(head);
}
void print(struct student *head)
{
	struct student *p=head->next;
	do{puts(p->c);p=p->next;}while(p->next!=NULL);
	puts(p->c);
}
void main()
{
	struct student *p=creat();
	print(p);
}
