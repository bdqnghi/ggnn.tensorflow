struct people
{
	char num[10];
	int age;
	struct people *next;
};
void main()
{
	struct people *head,*p0,*p,*s;
	head=(struct people *)malloc(sizeof(struct people));
	head->next=NULL;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p0=head;
		p=p0->next;
		s=(struct people *)malloc(sizeof(struct people));
		s->next=NULL;
		scanf("%s %d",s->num,&s->age);
		while(p!=NULL&&((s->age>=60&&s->age<=p->age)||s->age<60))
		{
			p0=p;
			p=p->next;
		}
		p0->next=s;
		s->next=p;
	}
	p=head->next;
	while(p!=NULL)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}