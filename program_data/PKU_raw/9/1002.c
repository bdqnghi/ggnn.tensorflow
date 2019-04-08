struct mouse
{
	char id[10];
	int age;
	struct mouse *next;
};
struct mouse *creat(int n)
{
	struct mouse *head,*p1,*p2;
	int i;
	for(i=0;i<n;i++)
	{
		if(i==1) head=p1;
		if(i>1) p2->next=p1;
		p2=p1;
		p1=(struct mouse *)malloc(sizeof(struct mouse));
		scanf("%s %d",p1->id,&p1->age);
	}
	p2->next=p1;p1->next=NULL;
	return(head);
}
struct mouse *order(struct mouse *head,int n)
{
	struct mouse *p1,*p2;
	int i,j,x;
	char a[10];
	for(i=1;i<n;i++)
	{
		p2=head;p1=p2->next;
		for(j=0;j<n-i;j++)
		{
			if(p2->age<p1->age&&p1->age>=60)
			{
				x=p2->age;p2->age=p1->age;p1->age=x;
				strcpy(a,p2->id);strcpy(p2->id,p1->id);strcpy(p1->id,a);
			}
			p2=p1;p1=p1->next;
		}
	}
	return(head);
}
main()
{
	struct mouse *head,*p;
	int i,n;
	scanf("%d",&n);
	head=creat(n);
	head=order(head,n);
	p=head;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
}
