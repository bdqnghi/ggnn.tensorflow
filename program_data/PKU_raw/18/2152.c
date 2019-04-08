int n;
void down1(int a[100][100],int m)
{
	int i,p,j;
	for(i=m;i<n;i=i+1)
	{
		p=a[i][m];
		for(j=m+1;j<n;j=j+1)
			if (p>a[i][j])  p=a[i][j];
		for(j=m;j<n;j=j+1)
			a[i][j]=a[i][j]-p;
	}
}
void down2(int a[100][100],int m)
{
	int i,j,p;
	for(i=m;i<n;i=i+1)
	{
		p=a[m][i];
		for(j=m+1;j<n;j=j+1)
			if (p>a[j][i])  p=a[j][i];
		for(j=m;j<n;j=j+1)
			a[j][i]=a[j][i]-p;
	}
}
int main()
{
	int i,j,t,k;
	int a[100][100];
	scanf("%d",&n);
	k=0;
	while(k<n)
	{
		k=k+1;
    t=0;
	for(i=0;i<n;i=i+1)
		for(j=0;j<n;j=j+1)
			scanf("%d",&a[i][j]);
	for(i=1;i<=n-1;i=i+1)
	{
		down1(a,i-1);
		down2(a,i-1);
		t=t+a[i][i];
		for(j=i-1;j<n;j=j+1)
			a[i][j]=a[i-1][j];
		for(j=i;j<n;j=j+1)
			a[j][i]=a[j][i-1];
	}
	printf("%d",t);
	if(k<n)  printf("\n");
	}
	return 0;
}
