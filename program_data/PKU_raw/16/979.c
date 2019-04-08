struct integ
{
	char num;
	struct integ *next;
}*head,*p1,*p2,*p3,*newhead;
void main()
{
	int i,n=0;
	p1=p2=(struct integ *)malloc(sizeof(struct integ));
	head=NULL;		
	for(i=0;;i++)
	{
		scanf("%c",&p1->num);
		if(p1->num<48||p1->num>57)break;
		n++;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;p1=(struct integ *)malloc(sizeof(struct integ));
	}p2->next=NULL;
	for(i=0;i<n;i++)
	{
		p1=head;
		while(p1->next!=NULL)
		{p2=p1;p1=p1->next;}
		if(i==0){p3=newhead=p1;}
		else p3=p3->next=p1;
		p2->next=NULL;	
	}
	for(p1=newhead;p1!=NULL;p1=p1->next)
		printf("%c",p1->num);
}