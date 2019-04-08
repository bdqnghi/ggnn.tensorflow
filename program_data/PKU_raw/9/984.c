struct patient
{
	char ID[15];
	int age;
	struct patient *next;
};
int n;
struct patient *create()
{
	struct patient *head,*p1,*p2;
	p1=(struct patient*)malloc(LEN);
	scanf("%s %d",p1->ID,&p1->age);
	head=p1;
	p2=p1;
	p1->next=NULL;
	int i=1;
	do
	{
		if(i==n)break;
        p1=(struct patient*)malloc(LEN);
	    scanf("%s %d",p1->ID,&p1->age);
		p2->next=p1;
		p2=p1;
		p1->next=NULL;
		i++;
	}while(1);
	return(head);
}
struct patient *findmax(struct patient *head)
{
    struct patient *max;
	
	struct patient *p;
	max = head;
	p=head->next;
	while(p)
	{
		if(p->age>max->age)
			max=p;
		p=p->next;
	}
	return(max);
}
struct patient *del(struct patient *head,struct patient *needdel)
{
	struct patient *p,*ppre;
	printf("%s\n",needdel->ID);
	p=head;
	while(p&&needdel!=p)
	{ppre=p;
	p=p->next;}
	if(p==head)
	{
		head=p->next;
		free(p);
	}
	else if (p)
	{		
		ppre->next=p->next;
		free(p);
	}
	
	return(head);
}
void print(struct patient *head)
{
	struct patient *p;
	p=head;
	while(p)
	{
		printf("%s\n",p->ID);
		p=p->next;
	}
}
int main()
{
	
	scanf("%d",&n);
	struct patient *head,*p;
	head=create();
	p = head;
	
	do
	{
		p = findmax(head);
		if(p->age<60)break;
		head=del(head,p);
		
	}while(1);
	print(head);
}




