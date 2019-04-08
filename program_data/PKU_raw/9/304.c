

struct a
{
	char id[20];
	int age;
	struct a * next;
};

struct a * insert(struct a * head,struct a * s)/*??????????????????????*/
{
	struct a *p0,*p1,*p2;
	p1=head;/*???*/
	p0=s;/*??????*/
	if(head==NULL)/*?????*/
	{head=p0;p0->next=NULL;}
	else{
	//while((p0->age<p1->age)&&(p1->next!=NULL))
	while((p0->age<=p1->age)&&(p1->next!=NULL))
	{p2=p1;p1=p1->next;}/*??????*/
	if(p0->age>p1->age)/*???*/
	{
		if(head==p1)head=p0;
		else p2->next=p0;
		p0->next=p1;
	}
	else{p1->next=p0;p0->next=NULL;}/*????????*/
	}
	return(head);
	
}

struct a *creat(struct a * head, struct a * s)/*???????????????????*/
{
    struct a *t;
	if(head==NULL)
	{head=s;s->next=NULL;}
	else
	{  for(t=head;t->next!=NULL;t=t->next);/*????*/
	       t->next=s;                       /*??*/
	       s->next=NULL;
	}
	return(head);

}

void main()
{
	struct a *head1,*head2,*s,*p;
	int i,n;
	scanf("%d",&n);
	head1=NULL;
	head2=NULL;
	for(i=0;i<=n-1;i++)
	{   s=LEN;
	    scanf("%s %d",s->id,&s->age);
	    s->next=NULL;
		if(s->age>=60)
		 head1=insert(head1,s);/*???????????????*/
		if(s->age<60)
		 head2=creat(head2,s);/*?????????????*/
	}
	for(p=head1;p!=NULL;p=p->next)
		printf("%s\n",p->id);
	for(p=head2;p!=NULL;p=p->next)/*????????????????*/
		printf("%s\n",p->id);
}