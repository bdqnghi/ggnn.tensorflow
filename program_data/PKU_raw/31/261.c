struct student
{
    char input[500];
	struct student *next;
};


void main()
{
	char c[500];
	struct student *head;
	struct student *p1,*p;
	head=NULL;
	while(strcmp(gets(c),"end")!=0)
	{
		p1=(struct student *)malloc(LEN);
		strcpy(p1->input,c);
		p1->next=head;
		head=p1;
	}
	p=head;
		do
		{
			puts(p->input);
			p=p->next;
			putchar('\n');
		}while(p!=NULL);
}

