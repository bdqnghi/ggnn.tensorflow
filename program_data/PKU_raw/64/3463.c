int r(int k,int n)
{
	int i;
	for(i=n-1;k>i;i--)
		k-=i;
	return(n-i-1);
}
int p(int k,int n)
{
	int i;
	for(i=n-1;k>i;i--)
		k-=i;
	return(n-i+k-1);
}
void main()
{
	int n,i,j,k=0,q[50],t,g,h;
	float y[50];
	struct point{int a;
	int b;
	int c;
	}x[12];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&x[i].a,&x[i].b,&x[i].c);
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
		g=r(q[i]+1,n);
		h=p(q[i]+1,n);
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[g].a,x[g].b,x[g].c,x[h].a,x[h].b,x[h].c,y[q[i]]);
	}
		
}
