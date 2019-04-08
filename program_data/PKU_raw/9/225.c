typedef struct Node
{
	char ID[11];
	int age;
	struct Node *next;
}node;
node *creat(int n)
{
	node *p1,*p2,*head;
	int i;
	p1=p2=(node *)malloc(sizeof(node));
	head=p1;
	for(i=0;i<n;i++)
	{
		p2=p1;
		scanf("%s%d",p1->ID,&p1->age);
		p1=(node *)malloc(sizeof(node));
		p2->next=p1;
	}
	p2->next=NULL;
	return(head);
}
void sort(int x,char *a,node *head)
{
	node *pre=head,*p=pre->next,*s;
	s=(node *)malloc(sizeof(node));
	s->age=x;
	strcpy(s->ID,a);
	s->next=NULL;
	while(p!=NULL&&x<=p->age)
	{
		pre=p;
		p=p->next;
	}
	pre->next=s;
	s->next=p;
}
void print(node *head)
{
	node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s\n",p->ID);
		p=p->next;
	}
}
void main()
{
	int n;
	node *head1,*head2,*p;
	scanf("%d",&n);
	head1=creat(n);
	head2=(node *)malloc(sizeof(node));
	strcpy(head2->ID," ");
	head2->next=NULL;
	p=head1;
	while(p!=NULL)
	{
		if(p->age>=60)
		    sort(p->age,p->ID,head2);
		p=p->next;
	}
	head2=head2->next;
	print(head2);
	p=head1;
	while(p!=NULL)
	{
		if(p->age<60)
			printf("%s\n",p->ID);
		p=p->next;
	}
}
