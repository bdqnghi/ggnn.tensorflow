struct p
{
	char i[10];
	int a;
	struct p *next;
};
void main()
{
	struct p *p1,*p2,*head,*head2,*q1,*q2;
	int n,i,k=0,b=0,x=0;
    scanf("%d",&n);
	p1=p2=(struct p *)malloc(len);
	scanf("%s %d",p1->i,&p1->a);
	for(i=0;i<n;i++)
	{
		k++;
		if(k==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct p *)malloc(len);
	    scanf("%s %d",p1->i,&p1->a);
	}
	p2->next=NULL;
	for(p1=head;p1!=NULL;p1=p1->next)if(p1->a>=60)x++;
	k=0;
	for(p1=head;p1!=NULL;p1=p1->next)
	if(p1->a>=60&&p1->a>b){b=p1->a;p2=p1;}
	q1=q2=(struct p *)malloc(len);
    strcpy(q1->i,p2->i);q1->a=p2->a;p2->a=0;
	for(i=0;i<x-1;i++)
	{k++;
	if(k==1)head2=q1;
	else q2->next=q1;
	q2=q1;b=0;
	for(p1=head;p1!=NULL;p1=p1->next)
	if(p1->a>=60&&p1->a>b){b=p1->a;p2=p1;}
	q1=(struct p *)malloc(len);
    strcpy(q1->i,p2->i);q1->a=p2->a;p2->a=0;
	}
	q2->next=q1;q2=q1;
	
	
	for(p1=head;p1!=NULL;p1=p1->next)
		if(p1->a>0){
			q1=(struct p *)malloc(len);
			strcpy(q1->i,p1->i);q1->a=p1->a;p1->a=0;
		q2->next=q1;q2=q1;
		}
		q2->next=NULL;
	for(q1=head2;q1!=NULL;q1=q1->next)
		printf("%s\n",q1->i);

	
    

	

}


