struct patient
{
	char id[10];
	int age;
	struct patient * next;
};
int main()
{
	int n,i;
	struct patient *p,*pre,*pnew,*head1,*head2;
	head1=NULL;
	head2=NULL;
	scanf("%d\n",&n);
	p=(struct patient *)malloc(sizeof(struct patient));
	for(i=0;i<n;i++)
	{
		pnew=(struct patient *)malloc(sizeof(struct patient));
		scanf("%s %d\n",pnew->id,&pnew->age);
		pnew->next=NULL;
		if(pnew->age>=60)
		{
			if(head1==NULL)
			{
				head1=pnew;
			}
			else
			{
				p=head1;
				while(p&&p->age>=pnew->age)
				{
					pre=p;
					p=p->next;
				}
				if(p==head1)
				{
					pnew->next=head1;
					head1=pnew;
				}
				else
				{
					pre->next=pnew;
					pnew->next=p;
				}
			}
		}
		else
		{
			if(head2==NULL)
			{
				head2=pnew;
			}
			else
			{
				p=head2;
				while(p)
				{
					pre=p;
					p=p->next;
				}
				if(p==head2)
				{
					pnew->next=head2;
					head2=pnew;
				}
				else
				{
					pre->next=pnew;
					pnew->next=p;
				}
			}
		}
	}
	p=head1;
	if(head1!=NULL)
	{
		while(p)
		{
			printf("%s\n",p->id);
			p=p->next;
		}
	}
	p=head2;
	if(head2!=NULL)
	{
		while(p)
		{
			printf("%s\n",p->id);
			p=p->next;
		}
	}
	return 0;
}