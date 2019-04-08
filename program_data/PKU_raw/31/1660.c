struct student
{
	char num[100];
	struct student *prev;
};

main()
{
	struct student *p1,*p2;
	int flag=0;
	while (1)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		gets(p1->num);
		if (*(p1->num)=='e') break;
		else 
		{
			if (flag==0) 
			{
				p2=p1;
				p1->prev=NULL;
				flag=1;
			}
			else 
			{
				p1->prev=p2;
				p2=p1;
			}
		}
	}
	while (p2!=NULL)
	{
		printf("%s\n",p2->num);
		p2=p2->prev;
	}
	return 0;
}