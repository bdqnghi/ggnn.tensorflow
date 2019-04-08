struct student
{
	char stu[100];
	struct student *next;
};
int n;

struct student *creat(void)
{
	struct student *head,*p1,*p2,*toil;
	n=0;
	head=NULL;
	p1=p2=(struct student*)malloc(LEN);
	gets(p1->stu);
	while(strcmp(p1->stu,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p1->next=p2;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		gets(p1->stu);
	}
	toil=p2;
	head->next=NULL;
	return(toil);
}

void print(struct student *toil)
{
	struct student *p;
	p=toil;
	if(toil!=NULL)
		do
		{
			printf("%s\n",p->stu);
			p=p->next;
		}while(p!=NULL);
}

void main()
{
	struct student *head;
	head=creat();
	print(head);
}



