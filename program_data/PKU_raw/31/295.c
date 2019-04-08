struct student
{
	char inf[100];
	struct student *next;
	struct student *last;
};
int n;
struct student *end;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	gets(p1->inf);
	head=NULL;
	while(1)
	{
		n=n+1;
		if(n==1)head=p1;
		else {p2->next=p1;p1->last=p2;}
		p2=p1;
		p1=(struct student*)malloc(LEN);
	    gets(p1->inf);
		if((p1->inf)[0]=='e') break;
	}
	head->last=NULL;
	p2->next=NULL;
	end=p2;
	return(head);
}
main()
{
	struct student *head;
	struct student *p1,*p2;
	head=creat();
	p1=end;
	while(p1!=NULL)
	{
		p2=p1;
		puts(p1->inf);
		p1=p2->last;
	}
}

