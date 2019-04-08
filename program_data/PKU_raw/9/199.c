struct pa{
	char name[10];
	int age;
	struct pa *next;
};

void sort(struct pa *head,struct pa *s)
{
	struct pa *p1,*p2;
	p1=head->next;
	p2=head;
	while(p1&&p1->age>=s->age)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=s;
	s->next=p1;
}

void creat(struct pa *head,struct pa *s)
{
	struct pa *p2,*p1;
	p1=head->next;
	p2=head;
	while(p1)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=s;
	s->next=p1;
}

struct pa * input()
{
	int i,n;
	struct pa *s,*head1,*head2,*p1,*p2;
	head1=(struct pa *)malloc(len);
	head2=(struct pa *)malloc(len);
	head1->next=NULL;
	head2->next=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        s=(struct pa *)malloc(len);
		scanf("%s%d",s->name,&s->age);
		if(s->age>=60) sort(head1,s);
		else creat(head2,s);
     }
	p1=head1->next;
	p2=head1;
	while(p1)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=head2->next;
	return(head1);
}

void print(struct pa *head)
{
	struct pa *p;
	p=head->next;
	while(p)
	{
		printf("%s\n",p->name);
		p=p->next;
	}
}


void main()
{
	struct pa *head;
	head=input();
	print(head);
}



