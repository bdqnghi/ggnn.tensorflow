struct stu
{
	int w;
	char c[10];
	struct stu *next;
};
int n;
struct stu*creat(int m)
{
	struct stu *head,*p1,*p2,*p3;
	int i;
	n=0;
	p1=p2=(struct stu*)malloc(sizeof(struct stu));
	head=p1;
	p1->next=NULL;
	n=0;
	scanf("%s %d",p1->c,&p1->w);
    for(i=0;i<m-1;i++)
	{   p1=(struct stu*)malloc(sizeof(struct stu));
	scanf("%s %d",p1->c,&p1->w);
	if(p1->w<60)
	{for(p2=head;p2->next!=NULL;p2=p2->next)
			;
		p2->next=p1;
		p1->next=NULL;
	}
	else
	{
    p2=head;
	while((p1->w<=p2->w)&&(p2->next!=NULL))
	{
		p3=p2;
		p2=p2->next;
	}
	if(p1->w>p2->w)
	{
		if(head==p2)
			head=p1;
		else p3->next=p1;
		p1->next=p2;
	}
	else
	{p2->next=p1;p1->next=NULL;
	}
    }
	}
	 return(head);
	
}
void main()
{
	int m,i;
	struct stu *head,*p;
	scanf("%d",&m);
	head=creat(m);
	p=head;
	for(i=0;i<m;i++)
	{printf("%s\n",p->c);
		
		p=p->next;
	}
	
}