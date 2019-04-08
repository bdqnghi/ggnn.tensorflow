struct point{
	int a,b,c;
	}x[10];
int d(int k,int n)
{
	int i;
	for(i=n-1;k>i;i--)
		k-=i;
	return(n-i-1);
}
int f(int k,int n)
{
	int i;
	for(i=n-1;k>i;i--)
		k-=i;
	return(n-i+k-1);
}
void main()
{
	int n,i,j,k=0,q[46],t;
	float y[46];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&x[i].a,&x[i].b,&x[i].c);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++,k++)
			y[k]=sqrt((x[i].a-x[j].a)*(x[i].a-x[j].a)+(x[i].b-x[j].b)*(x[i].b-x[j].b)+(x[i].c-x[j].c)*(x[i].c-x[j].c));
		for(i=0;i<=n*(n-1)/2;i++)
			q[i]=i;
	for(i=0;i<n*(n-1)/2-1;i++)
		for(j=0;j<n*(n-1)/2-1-i;j++)
			if(y[q[j]]<y[q[j+1]])
			{t=q[j];
			q[j]=q[j+1];
			q[j+1]=t;
			}
		for(i=0;i<n*(n-1)/2;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[d(q[i]+1,n)].a,x[d(q[i]+1,n)].b,x[d(q[i]+1,n)].c,x[f(q[i]+1,n)].a,x[f(q[i]+1,n)].b,x[f(q[i]+1,n)].c,y[q[i]]);
	}
}
