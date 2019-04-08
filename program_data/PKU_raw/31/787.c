struct student
{
	char num[1000];
	struct student *next;
};

int main()
{
	struct student s[1000],*p,*pheader;
	int i=0;
	int n;
	char ch;
	for (i=0;;i++)
	{
		gets(s[i].num);
		if (strcmp(s[i].num,"end")==0)
			break;
	}
	n=i;
	pheader=&s[n-1];
	for (i=n-1;i>=1;i--)
	{
		s[i].next=&s[i-1];
	}
	s[0].next=NULL;
    p=pheader;
	while (p!=NULL)
	{
		puts(p->num);
		p=p->next;
	}

	return 0;
}