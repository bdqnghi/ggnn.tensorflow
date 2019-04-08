struct student
{
	char str[1000];
	struct student *next;
};
int main()
{
	struct student *p,*pnew,*head,*p1;
	pnew=(struct student *)malloc(sizeof(struct student));
	gets(pnew->str);
	pnew->next=NULL;
	if(strcmp(pnew->str,"end")==0)
	{
		free(pnew);
		head=NULL;
	}
	else
	{
		head=pnew;
		p=pnew;
	while(1)
	{
		pnew=(struct student *)malloc(sizeof(struct student));
		gets(pnew->str);
		pnew->next=NULL;
		if(strcmp(pnew->str,"end")==0)
		{
			free(pnew);
			break;
		}
		else
		{
			head=pnew;
			pnew->next=p;
			p=pnew;
		}
	}
	}
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->str);
		p1=p1->next;
	}
	return 0;
}