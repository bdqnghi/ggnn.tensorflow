struct student 
{
	char name[20];
	int ss;
	int cs;
	char g[2];
	char w[2];
	int pa;
	int m;
	struct student *next;
};
void main()
{
	int i,n,mm=0,all=0;
	scanf("%d",&n);
	struct student *head,*p1,*p2,*p,*q;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %d %d %s %s %d",p1->name,&p1->ss,&p1->cs,p1->g,p1->w,&p1->pa);
	head=NULL;
	while(mm<n-1)
	{
		mm=mm+1;
		if(mm==1) head=p1;
		else 
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s %d %d %s %s %d",p1->name,&p1->ss,&p1->cs,p1->g,p1->w,&p1->pa);
	}
	p2->next=p1;
	p2=p1;	
	p2->next=NULL;

/*?????*/
	p=head;
	do
	{
		p->m=0;
		if(p->ss>80&&p->pa>=1)
			p->m=p->m+8000;
		if(p->ss>85&&p->cs>80)
			p->m=p->m+4000;
		if(p->ss>90)
			p->m=p->m+2000;
		if(p->ss>85&&strcmp(p->w,"Y")==0)
			p->m=p->m+1000;
		if(p->cs>80&&strcmp(p->g,"Y")==0)
			p->m=p->m+850;
		p=p->next;
	}while(p!=NULL);
	p=q=head;	
	do
	{
		all=all+q->m;
		if(p->m<q->m)
			p=q;
		q=q->next;
	}while(q!=NULL);
	printf("%s\n%d\n%d\n",p->name,p->m,all);
}