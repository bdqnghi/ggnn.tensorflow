struct mon
{
	int num;
	struct mon*next;
};
void monkey(int m,int n)
{
	struct mon a[300],*p1,*p2;
	int i,j;
	for(i=1;i<=n;i++)
	{
		a[i].num=i;
		a[i].next=a+i+1;
	}
	a[n].next=a+1;
	p1=a+1;
	for(;n>1;n--)
	{
		for(j=1;j<m;j++)
		{
			p2=p1;
			p1=(*p2).next;
		}
		(*p2).next=(*p1).next;
		p1=(*p1).next;
	}
	printf("%d\n",(*p1).num);
}
int main()
{
	int n,m;
	while(1)
	{
		scanf("%d%d",&n,&m);
		if(m==0&&n==0) break;
		monkey(m,n);
	}
	return 0;
}