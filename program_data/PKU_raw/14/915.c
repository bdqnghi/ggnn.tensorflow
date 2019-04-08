struct student
{
	int id;
	int c;
	int m;
	int s;
	struct student *next;
};
struct student *creat(void)
{       
	struct student *head,*p1,*p2; 
	int n,i;
	p1=p2=(struct student*)malloc(LEN); 
    scanf("%d",&n);    
	head=NULL;       
	for(i=0;i<n;i++)     
	{                         
		scanf("%d%d%d",&p1->id,&p1->c,&p1->m);
		p1->s=p1->c+p1->m;
		if(i==0)head=p1;            
		else p2->next=p1;              
		p2=p1;           
		p1=(struct student *)malloc(LEN);            
	} 
	p2->next=NULL;    
    return (head);
}
void exchange(struct student *x,struct student *y)
{
	int t;
	t=x->id;x->id=y->id;y->id=t;	
	t=x->c;x->c=y->c;y->c=t;	
	t=x->m;x->m=y->m;y->m=t;
	t=x->s;x->s=y->s;y->s=t;
}
void main()
{
	struct student *p,*q,*head;
	int temp,i;
	head=p=creat();
	for(p=head,i=0;p->next!=NULL,i<3;p=p->next,i++)
	{
		temp=p->s;
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->s<q->s)temp=q->s;
			if(p->s!=temp)exchange(p,q);
		}
	}
	for(p=head,i=0;i<3;p=p->next,i++)
		printf("%d %d\n",p->id,p->s);
}
