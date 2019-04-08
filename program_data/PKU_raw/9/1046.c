struct patient
{
	char id[10];
	int age;
	struct patient *next;
	struct patient *pre;
};
void main()
{
	void f(struct patient **head);
	struct patient *head,*p1,*p2;
	int n,i;
	scanf("%d",&n);
	p1=(struct patient *)malloc(sizeof(struct patient));
	p2=p1;head=p1;p1->pre=NULL;
	scanf("%s %d",p1->id,&p1->age);
	for(i=0;i<n-1;i++)
	{
		p1=(struct patient *)malloc(sizeof(struct patient));
		p2->next=p1;p1->pre=p2;p2=p1;
		scanf("%s %d",p1->id,&p1->age);
	}
	p2->next=NULL;
	f(&head);
	for(p1=head;p1!=NULL;p1=p1->next)printf("%s\n",p1->id);
}
void f(struct patient **head)
{
	struct patient *p1,*p2,*p;
	for(p1=(*head)->next;p1!=NULL;p1=p1->next)
		if(p1->age>=60)
		{
			p=p1->next;
			p1->pre->next=p1->next;
			if(p1->next!=NULL)p1->next->pre=p1->pre;
			for(p2=*head;p2->next!=NULL;p2=p2->next)
				if(p1->age>p2->age)
				{
					if(p2->pre!=NULL)p2->pre->next=p1;else *head=p1;
					p1->pre=p2->pre;p2->pre=p1;p1->next=p2;
					break;
				}
			if(p2->next==NULL)
			{
				if(p1->age>p2->age)
				{
					if(p2->pre!=NULL)p2->pre->next=p1;else *head=p1;
					p1->pre=p2->pre;p2->pre=p1;p1->next=p2;
				}
				else {p2->next=p1;p1->pre=p2;p1->next=NULL;}
			}
			if(p!=NULL) p1=p->pre;
			else break;
		}
}
