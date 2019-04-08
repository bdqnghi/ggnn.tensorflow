struct pa
	{
		char id[11];
		int age;
		struct pa *next;
	};
struct pa *insert(struct pa *head,struct pa * new1)
{
	struct pa *p0,*p1,*p2;
	p1=head;
	p0=new1;
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	else if(p0->age>=60)
	{
		while((p1->age>=p0->age)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->age>p1->age)
		{
			if(head==p1)
				head=p0;
			else 
				p2->next=p0;
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	else
	{
		p1=head;
		while(p1!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		p2->next=p0;
		p0->next=NULL;
	}
	return(head);
}
void main()
{
	struct pa *p,*head;
	int n,i;
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(struct pa *)malloc(sizeof(struct pa));
		scanf("%s%d\n",p->id,&p->age);
		head=insert(head,p);
	}
	p=head;
	while(p!=NULL)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
}