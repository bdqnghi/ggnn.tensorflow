struct student
{
	char str[500];
	struct student *next;
	struct student *before;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	gets(p1->str);
	p1->before=NULL;
	head=p1;
	while(strcmp(p1->str,"end")!=0){
		p2=p1;
		p1=(struct student*)malloc(LEN);
		gets(p1->str);
		p2->next=p1;
		p1->before=p2;
	}
	p2->next=NULL;
	head=p2;
	return(head);
}

void main()
{
	struct student *p,*head;	
	head=creat();
	p=head;
	while(p->before!=NULL)
	{printf("%s\n",p->str);
	p=p->before;
	}
	printf("%s",p->str);
}
		