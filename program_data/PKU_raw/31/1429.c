struct student
{
	char c[100];
	struct student*next;
};
struct student*creat()
{
	struct student*p1,*p2,*p;
	int i;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	p=p1;
	gets(p1->c);
	while(strcmp(p1->c,"end")!=0)
	{
		p1=(struct student*)malloc(sizeof(struct student));
		gets(p1->c);
		if(strcmp(p1->c,"end")==0) break;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return p;
}
struct student*change(struct student*p)
{
	struct student*p1,*p2,*p3;
	p1=p;
	p2=p;
	p3=NULL;
	while(p1->next!=NULL)
	{
		p2=p1->next;
		p1->next=p3;
		p3=p1;
		p1=p2;
	}
	p1->next=p3;
	return(p1);
}
void print(struct student*p)
{
	struct student *p1,*p2;
	p1=p;
	while(p1!=NULL)
	{
		printf("%s\n",p1->c);
		p1=p1->next;
	}
}
void main()
{
	struct student *p,*p1;
	p=creat();
	p=change(p);
	print(p);
}

