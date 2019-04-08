struct student
{
	char a[100];
	struct student *next;
};

int main()
{
	struct student *p1,*p2;
	p1=(struct student*)malloc(len);
	p1->next=NULL;
	gets(p1->a);
	while((strcmp(p1->a,"end"))!=0)
	{
		p2=p1;
		p1=(struct student*)malloc(len);
		p1->next=p2;
		gets(p1->a);
	}
	p1=p1->next;
	while(p1!=NULL)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}
	return 0;
}