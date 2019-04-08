struct patient
{
	char ID[10];
	int age;
	struct patient *next;
};
struct patient * insert(struct patient *head,struct patient *another)
{
	struct patient *p0,*p1,*p2;
	p1=head;
	p0=another;
	if(p0->age<60)
	{
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		p1->next=p0;
		p0->next=NULL;
	}
	else
	{
		while(p1->age>=p0->age&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->age>=p0->age)
		{
			p1->next=p0;
			p0->next=NULL;
		}
		else
		{
            if(p1==head) 
			{
				head=p0;
				p0->next=p1;
			}
			else
			{
				p2->next=p0;
				p0->next=p1;
			}
		}
	}
	return head;
}
void print(struct patient *head)
{
	struct patient *p;
	p=head;
    while(p!=NULL)
	{
		printf("%s\n",p->ID);
		p=p->next;
	}
}
void main()
{
	int n,i;
	struct patient *head,*p;
	scanf("%d",&n);
	head=p=(struct patient *)malloc(len);
	scanf("%s %d",p->ID,&p->age);
    head->next=NULL;
	for(i=1;i<n;i++)
    {
       p=(struct patient *)malloc(len);
	   scanf("%s %d",p->ID,&p->age);
	   head=insert(head,p);
	}
	print(head);
}