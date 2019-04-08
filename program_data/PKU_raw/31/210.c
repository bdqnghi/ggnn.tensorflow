struct student
{
	char inf[1000];
	struct student *pre,*next;
};
void main()
{
	struct student *head,*p1,*p2,*tail;
	int i,j,k;
	head=(struct student *)malloc(LEN);
	p1=head;p2=NULL;
	p1->pre=NULL;p1->next=NULL;
	for(;;)
	{
		gets(p1->inf);
		if (strcmp(p1->inf,"end")==0) {p1->pre=p2;tail=p2;break;}
		else 
		{
			p1->pre=p2;
			p1->next=(struct student *)malloc(LEN);
			p2=p1;p1=p1->next;p1->next=NULL;
		}
	}
	p1=tail;
	while (p1)
	{
		puts(p1->inf);
		p1=p1->pre;
	}
}