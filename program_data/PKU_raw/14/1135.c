struct student
{
	int a;
	int b;
	int c;
	struct student *next;
};
void main()
{
	int n=0,i,j,k;
	scanf("%d",&k);
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(L);
	scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	head=NULL;
	for(i=0;i<k-1;i++)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(L);
		scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	struct student *g;
	int x[100000],y[100000];
	g=head;
	for(i=0;i<k;i++)
	{
		x[i]=g->a;
		y[i]=g->b+g->c;
		g=g->next;
	}
	int m[4]={0},t,r=1,z=0;
	m[0]=201;
	for(i=0;i<3;i++)
	{
		for(j=0;j<k;j++)
		{
			if(m[r]<y[j]&&y[j]<m[r-1])
				m[r]=y[j];
		}
		r++;
	}
	for(i=0;i<k;i++)
	{
		if(z==3)break;
		if(y[i]==m[1])
		{
			printf("%d %d\n",x[i],y[i]);
			z++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(z==3)break;
		if(y[i]==m[2])
		{
			printf("%d %d\n",x[i],y[i]);
			z++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(z==3)break;
		if(y[i]==m[3])
		{
			printf("%d %d",x[i],y[i]);
			z++;
		}
	}
}