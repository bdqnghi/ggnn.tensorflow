struct student
{
	char xh[1000];
	struct student *next;
	struct student *last;
};
int n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	p1=(struct student*)malloc(sizeof(struct student));
	p2=p1;
	gets(p1->xh);
         head=NULL;
	p1->last=NULL;
	for(n=1;strcmp(p1->xh,"end")!=0;n++)
	{
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		gets(p1->xh);
		if(strcmp(p1->xh,"end")==0) break;
		p1->last=p2;
	}
	head=p2;
	p2->next=NULL;
	return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
		for(;p!=NULL;)
		{
			printf("%s\n",p->xh);
			p=p->last;
		}
}
void main()
{
	struct student *head;
	head=creat();
	print(head);
}
