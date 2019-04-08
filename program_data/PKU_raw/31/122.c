
struct student
{
	char str[100];
	struct student *next;
};

int isequal(char *a);

int main()
{
	struct student *head,*p1,*p2;
	p1=(struct student*)malloc(sizeof(struct student));
	gets(p1->str);
	p1->next=NULL;
	if(isequal(p1->str))
	{
		free(p1);
		head=NULL;
	}
	else
	{
		head=p1;
		p2=p1;
		do
		{
			p1=(struct student*)malloc(sizeof (struct student));
			gets(p1->str);
			p1->next=NULL;
			if (isequal(p1->str))
			{
				free(p1);
				break;
			}
			else
			{
				head=p1;
				p1->next=p2;
				p2=p1;

			}
		}
		while(1);
	}
	struct student *p;
	p=head;
	while(p)
	{
		printf("%s",p->str);
		p=p->next;
		if (p != NULL)
			printf("\n");
	}
	return 0;
}

int isequal(char *a)
{
	if (a[0] == 'e' && a[1] == 'n' && a[2] == 'd' && a[3] == 0)
		return 1;
	else 
		return 0;
}