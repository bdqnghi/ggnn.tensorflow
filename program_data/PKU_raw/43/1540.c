int main()
{
	int i,j,a,b,m;  
	int x[10000]={0},y[10000];
	scanf("%d",&m);
	for(a=2;a<=m;a++)
	{
		for(b=2;b<=sqrt(a);b++)
			if(a%b==0)
			{
				x[a-1]=1;
				y[a-1]=0;
			}
		if(x[a-1]==0)y[a-1]=a;
	}
		for(i=1;i<=m;i++)
		for(j=1;j<=m;j++)
			if(m-y[i]==y[j]&&y[i]<=y[j])printf("%d %d\n",y[i],y[j]);
	return 0;
}
