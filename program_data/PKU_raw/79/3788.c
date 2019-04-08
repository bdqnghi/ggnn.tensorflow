struct monkey
	{
		int num;
		struct monkey *next;
	};
void main()
{
	int kingf(int n,int m);
	int m=1,n=1;
	int king;
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(m==0&&n==0)break;
		if(m==1)printf("%d\n",n);
		else
		{
			king=kingf(n,m);
			printf("%d\n",king);
		}
	}
}
int kingf(int n,int m)
{
	int i;
	struct monkey monkey[800];
	struct monkey *p1=&monkey[0],*p2=&monkey[0];

	for(i=0;i<n-1;i++)
	{
		monkey[i].next=&monkey[i+1];
		monkey[i].num=i+1;
	}
	monkey[i].next=&monkey[0];
	monkey[i].num=i+1;

	for(;p1!=p1->next;p1=p1->next)
	{	
		for(i=1;i<m-1;p1=p1->next,i++);
		p2=p1;
		p2=p2->next;
		p1->next=p2->next;
	}
	return p1->num;	
}
