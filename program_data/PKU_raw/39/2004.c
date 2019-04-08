struct student
{
	char name[20];
	int s1;
	int s2;
	char c;
	char w;
	int paper;
	int m;
	struct student *next;
};
void main()
{
	int N,n,total=0,r,max;
	int a[108][6];
	scanf("%d",&N);
	struct student *p1,*p2,*head,*p,*pp;
	p1=p2=(struct student*)malloc(LEN);
	n=0;
	scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->c,&p1->w,&p1->paper);
	n=n+1;
	while(n<N)
	{		
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
	p1=(struct student*)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->c,&p1->w,&p1->paper);
	n=n+1;}
	p2->next=p1;
	p1->next=NULL;
	
	p=head;
	r=0;
	while(r<N)
	{		

		(p->m)=8000*((p->s1)>80&&(p->paper>0))+4000*((p->s1)>85&&(p->s2)>80)+2000*((p->s1)>90)+1000*((p->s1)>85&&(p->w=='Y'))+850*((p->s2)>80&&(p->c=='Y'));
		total=total+(p->m);
		r++;p=p->next;	
	}

r=0;
int i,j=0;
	p=head;
	max=p->m;
	while(r<N)
	{
		if((p->m)>max)
		{
			max=(p->m);
			j=r;
		}
		r++;
		p=p->next;

	}
i=0;
pp=head;
while(i<j)
{
	pp=pp->next;
	i++;
}
printf("%s\n%d\n%d\n",pp->name,max,total);

}
