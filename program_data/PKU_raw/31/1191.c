
struct student
{
	char num[50],ming[100];
	struct student *pro;
};
int n;
struct student *tail;

struct student *creat()
{
	struct student *head;
	struct student *p1,*p2;
    int i;
	i=0;
	p1=p2=(struct student *)malloc(len);
	scanf("%s",p1->num);
	head=0;
	while (strcmp(p1->num,"end"))
	{
		gets(p1->ming);
		i++;
		if (i==1) 
		{
			head=p1;
			head->pro=0;
		}
		   else 
		   {
			   p1->pro=p2;
		   }
		p2=p1;
		p1=(struct student *)malloc(len);
		scanf("%s",p1->num);
	}	
	tail=p2;
	return(tail);
}

main()
{
	struct student *p;
	creat();
	p=tail;
	for (;p!=0;)
	{
		printf("%s%s\n",p->num,p->ming);
		p=p->pro;
	}
}
