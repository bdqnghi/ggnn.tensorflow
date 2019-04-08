int main()
{
	struct date
	{
		char a[10];
		int num;
		struct date *next;
	};
	struct date *p1,*p2,*head;
	int n,i,temp,j,compare;
	char tem[10];
	scanf("%d",&n);
	head=p1=p2=(struct date *)malloc(len);
	scanf("%s %d",head->a,&head->num);
	head->next=NULL;
	head=p1;
	for(i=2;i<=n;i++)
	{
		p2=(struct date *)malloc(len);
		scanf("%s %d",p2->a,&p2->num);
		p2->next=NULL;
		p1->next=p2;
		p1=p2;
	}
	for(i=n-1;i>=1;i--)
	{
		p1=head;p2=p1->next;
		for(j=1;j<=i;j++)
		{
			compare=strcmp(p1->a,p2->a);
			if(p1->num<60&&p2->num>=60)
			{
				strcpy(tem,p1->a);
				strcpy(p1->a,p2->a);
				strcpy(p2->a,tem);
				temp=p2->num;
				p2->num=p1->num;
				p1->num=temp;
			}
			if(p1->num>=60&&p2->num>=60&&p1->num<p2->num)
			{
				strcpy(tem,p1->a);
				strcpy(p1->a,p2->a);
				strcpy(p2->a,tem);
				temp=p2->num;
				p2->num=p1->num;
				p1->num=temp;
			}
			p1=p2;
			p2=p1->next;
		}
	}
	p1=p2=head;		
	for(i=1;i<=n;i++)
	{
		printf("%s\n",p2->a);
		p1=p2;
		p2=p1->next;
	}
	return 0;
}