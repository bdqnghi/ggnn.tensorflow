struct student
{
	char info[50];
	struct student *pre;
	struct student *next;
};

void main()
{
	int i=0,n=0;
	struct student *p,*head,*p0;
	p=head=(struct student *)malloc(sizeof(struct student));
	while(strcmp((gets((*p).info)),"end")!=0)
	{
		n+=1;
		p0=p;
		p=(*p).next=(struct student *)malloc(sizeof(struct student));
		(*p).pre=p0;
	}

	while(i++<n)
	{
		p=(*p).pre;
		printf("%s\n",(*p).info);
	}
}