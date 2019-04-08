struct pat
{
	char num[11];
	int age;
	struct pat *next;
};
void main()
{
	int n,i;
	scanf("%d",&n);
	struct pat *head,*p1,*p2,*pre;
	p1=(struct pat *)malloc(sizeof(struct pat));
	scanf("%s %d",p1->num,&p1->age);
	head=p1;
	p1->next=NULL;
	for(i=1;i<n;i++)
	{
		p1=(struct pat *)malloc(sizeof(struct pat));
	    scanf("%s %d",p1->num,&p1->age);
		if(p1->age<60)
		{
			p2=head;
			while(p2)
			{
				if(p2->next==NULL) 
				{
					p2->next=p1;p1->next=NULL;break;
				}
				p2=p2->next;
			}
		}
		else if(p1->age>=60)
		{p2=head;
		while(p2)
		{	
			if(p2==head&&p1->age>p2->age)
			{
				head=p1;p1->next=p2;break;
			}
			else if(p1->age>p2->age)
			{
				pre->next=p1;p1->next=p2;break;
			}
			else if(p2->next==NULL)
			{
				p2->next=p1;p1->next=NULL;break;
			}
			else {pre=p2;p2=p2->next;}
		}
		}
	}
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->num);
		p1=p1->next;
	}
		
}
