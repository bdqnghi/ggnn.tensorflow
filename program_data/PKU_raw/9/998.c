struct hospital
{
	char ID [13];
	int age;
	struct hospital *next;
};
int main()
{
	void change(struct hospital *);
	int n;
	scanf("%d",&n);
	int i;
	struct hospital *p,*head;
	p=(struct hospital *)malloc(sizeof(struct hospital));
	head=p;
	for(i=0;i<n-1;i++)
	{
		scanf("%s %d",p->ID,&p->age);
		p->next=(struct hospital *)malloc(sizeof(struct hospital));
		p=p->next;
	}
	scanf("%s %d",p->ID,&p->age);
    p->next=NULL;
	for(i=0;i<n;i++)
	{
	for(p=head;p->next!=NULL;p=p->next)
	{
		if(p->age<60&&p->next->age>=60)
		{
			change(p);
		}
		if(p->age>=60&&p->next->age>=60&&p->next->age>p->age)
		{
			change(p);
		}
	}
	}
	for(p=head;p!=NULL;p=p->next)
	{
		printf("%s\n",p->ID);
	}
	return 0;
}
void change(struct hospital *p)
{
	int tempage;
	char tempID[13];
	struct hospital *later=p->next;
	tempage=later->age;
	strcpy(tempID,later->ID);
	later->age=p->age;
	strcpy(later->ID,p->ID);
	p->age=tempage;
	strcpy(p->ID,tempID);
}
