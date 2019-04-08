struct stu
{
	char inf[50];
	struct stu *next;
};

struct stu *head,*p1,*p2;
int output(struct stu *point);
int main()
{

	p1=(struct stu *)malloc(sizeof(struct stu));
	head=p1;
	while(gets((*p1).inf)!=NULL)
	{
		p2=(struct stu *)malloc(sizeof(struct stu));
		(*p1).next=p2;
		p1=p2;
	}
	(*p1).next=NULL;
	output(head);
	return 0;
}

int output(struct stu *point)
{
	if(strcmp(point->next->inf,"end")!=0)
		output(point->next);
	puts((*point).inf);
	return 0;
}