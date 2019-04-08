char ex[4]={"end"};
struct student
{
	char n[100];
	struct student *next;
};
void main()
{
	int n=0;
	struct student *a=NULL,*b=NULL;
	struct student *head,*p1,*p2;
	head=NULL;
	p1=(struct student*)malloc(LEN);
	p2=NULL;
	gets(p1->n);
	while(strcmp(ex,p1->n)!=0)
	{
		p1->next=p2;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		gets(p1->n);
	}
	p1=NULL;
	head=p2;
	a=head;
	while(a!=NULL)
	{
		puts(a->n);
		b=a->next;
		a=b;
	}
}