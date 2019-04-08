int main()
{
	struct student
	{
		char imfor[100];
		struct student *early;
	};

	int m;
	struct student *p1,*p2,*last,*p;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	gets(p1->imfor);
	p1->early=0;
	for (m=1;m<1000;m++)
	{
		p1=(struct student * )malloc(sizeof(struct student));
		p1->early=p2;
		p2=p1;
		gets(p1->imfor);
		if (p1->imfor[0]=='e')
		{
			last=p1->early;
			break;
		}

	}
	p=last;
	for (m=1;m<1000;m++)
	{
		printf("%s\n",p->imfor);
		p=p->early;
		if (p==0)
		{
			break;
		}
	}
}