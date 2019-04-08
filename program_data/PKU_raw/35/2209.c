int maxj(int a[],int i,int m)
{
	int j=0,ma,max=0;
	ma=a[0];
	for(;j<m;j++)
		if(a[j]>ma) {ma=a[j];max=j;}
	return max;
}

int main()
{
	int n,m,p=0,k;
	int a[8][8]={0};
	scanf("%d,%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		k=maxj(a[i],i,m);
		for(j=0;j<n;j++)
		{if(a[i][k]>a[j][k]) break;}
		if(j==n) {printf("%d+%d\n",i,k);p=1;break;}
	}
	if(p==0) printf("No");
	return 0;
}
