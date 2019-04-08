struct student
{
	char a[100];
	struct student *next;
};

struct student *create()
{
	struct student *p1,*p2;

	p1=(struct student*)malloc(len);
	gets(p1->a);
	p1->next=NULL;

	p2=p1;
	for(;;)
	{
		p1=(struct student*)malloc(len);
		gets(p1->a);
		if(strcmp(p1->a,"end")==0) 
		{
			free(p1);
			break;
		}
		p1->next=p2;
		p2=p1;
	}
	return p2;
}

void main()
{
	struct student *head,*p1;
	struct student *create();
	head=create();
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}
}

