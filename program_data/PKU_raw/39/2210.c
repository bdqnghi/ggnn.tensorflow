void main()
{
	int n,z=0,sum=0,i,max=0;scanf("%d",&n);
	struct st
	{
		char na[30];
		int s1;
		int s2;
		char x1;
		char x2;
		int l;
		int b;
		struct st *next;
	}*p,*head,*p1,*p2,*q;
p1=p2=(struct st *)malloc(sizeof(struct st));head=p1;
do
{
	scanf("%s %d %d %c %c %d",p1->na,&p1->s1,&p1->s2,&p1->x1,&p1->x2,&p1->l);
	z++;
	p1->b=0;if(p1->s1>80&&p1->l>=1)p1->b+=8000;if(p1->s1>85&&p1->s2>80)p1->b+=4000;if(p1->s1>90)p1->b+=2000;
	if(p1->s1>85&&p1->x2=='Y')p1->b+=1000;if(p1->s2>80&&p1->x1=='Y')p1->b+=850;
	p1=(struct st *)malloc(sizeof(struct st));p2->next=p1;p2=p1;
}while(z!=n);
p1=NULL;
z=0;
p=head;
do
{
	sum+=p->b;
	if(p->b>max){max=p->b;q=p;}
z++;	
p=p->next;
}while(z!=n);
printf("%s\n%d\n%d\n",q->na,max,sum);

}