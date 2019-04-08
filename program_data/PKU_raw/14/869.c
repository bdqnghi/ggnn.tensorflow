struct student
{
	int num;
	int chi;
	int math;
	int total;
	struct student *next;
	
};
struct student* creat(int n)
{
	struct student *p1,*p2,*head;
	int i;
	p1=p2=(struct student*) malloc(len);
	head=NULL;
	i=0;
	while(i<n)
	{
		scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
		i=i+1;
		if(i==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(len);
	}
	p2->next=NULL;
	return(head);
}
void sum(struct student*head)
{
	struct student*p1;
    p1=head;
	while(p1)
	{
		p1->total=p1->chi+p1->math;
		p1=p1->next;
		
	}
}
struct student* choose(struct student*head)
{
	struct student*p1,*p2;
	p1=head;
	p2=p1;
	while(p1->next)
	{
		if(p2->total<(p1->next)->total)
			p2=p1->next;
		p1=p1->next;
		
	}
	printf("%d %d\n",p2->num,p2->total);
	return(p2);
}
struct student* del(struct student*head,struct student*p2)
{
	struct student *p1;
	p1=head;
	if(p2==head)
	{
		head=p2->next;
		return(head);
	}
	else 
	{
		while(p1->next!=p2)
	{
		p1=p1->next;
	}
		p1->next=p2->next;
	}
	return(head);
	

}
void main()
{
	struct student *head,*p;
	int n;
	scanf("%d",&n);
	if(n>=3)
	{
	head=creat(n);
	sum(head);
	p=choose(head);
	head=del(head,p);
	p=choose(head);
	head=del(head,p);
	p=choose(head);
	}
	else if(n=2)
	{
		head=creat(n);
	sum(head);
	p=choose(head);
	head=del(head,p);
	p=choose(head);

	}
	else
	{
		
		head=creat(n);
	sum(head);
	p=choose(head);
	}

	
}
