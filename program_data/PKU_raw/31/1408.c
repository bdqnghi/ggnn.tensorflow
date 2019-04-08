
struct stu
{	//????????
	char stunum[10];
	char name[20];
	char sex[3];
	char age[10];
	char mark[10];
	char add[20];
	struct stu *next,*before;//??
};

void main()
{
	struct stu *p,*pt,*head;
	int i=0,n=0;
	char a[4];
	strcpy(a, "end");
	pt=p=head=(struct stu *)malloc(Len);
	for(i=0;;i++)
	{
		scanf("%s",&p->stunum);
		if(strcmp(p->stunum,a)==0)
		{
			pt->next=NULL;break;
		}
		scanf("%s %s %s %s %s",&p->name,&p->sex,&p->age,&p->mark,&p->add);
		pt=p;
		p=(struct stu *)malloc(Len);
		pt->next=p;
		p->before=pt;
	}
	p=pt;
	if(p!=head)
	{
		for(i=0;;i++)
		{
			printf("%s %s %s %s %s %s",&p->stunum,&p->name,&p->sex,&p->age,&p->mark,&p->add);
			if(p==head)
				break;
			printf("\n");
			p=p->before;
		}
	}
	printf("\n");
}