struct student
{
	char a[100];
	struct student *pre;
};
struct student *creat()
{
	struct student *p1;struct student *p2;
	struct student *head;
	head=(struct student *) malloc(sizeof(struct student));
	p1=p2=head;
	head->pre=0;
	while(1)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		p1->pre=p2;
		gets(p1->a);
		if(p1->a[0]=='e')
		{
			return (p2);
		}
		p2=p1;
	}
}
int main()
{
	struct student *p1;
	p1=creat();
	while(p1->pre!=0)
	{
		printf("%s\n",p1->a);
		p1=p1->pre;
	}
	return 0;
}
//?????????????????
