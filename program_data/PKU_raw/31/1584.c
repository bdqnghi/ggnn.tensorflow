struct student
{
	char a[100];
	struct student * next;
}*p1,*p2,*head;

int main()
{
	int n=0;
	p1=p2=(struct student *)malloc(Len);
	gets(p1->a);
	p2->next=NULL;
	while(1)
	{
		p1=(struct student *)malloc(Len);
		gets(p1->a);
		p1->next=p2;
		if(strcmp(p1->a,"end")==0)
		{
			head=p1->next;
			break;
		}
		else
		{
			p2=p1;
		}

	}
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}

	
}