


void main()
{
	struct student
{
	char stu[100];
	struct student *next;
	struct student *prev;
}*head,*p1,*p2,*p;
	
	int n;
	p1=p2=(struct student *)malloc(LEN);
	gets(p1->stu);
	p1->prev=NULL;
	while(strcmp(p1->stu,"end")!=0)
	{
		p1=(struct student*)malloc(LEN);
		p1->prev=p2;
		gets(p1->stu);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	
	p=p2;

		do
		{
			p=p->prev;
			printf("%s\n",p->stu);
			
		}while(p->prev!=NULL);
	}
	