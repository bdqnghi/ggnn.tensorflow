int main()
{
	int m,n;
	int i,j,k;
	scanf("%d %d",&m,&n);
	int a[15]={m},b[15]={n};
	for(i=0;a[i]!=1;i++)
	{
		a[i+1]=a[i]/2;
	}
	for(j=0;b[j]!=1;j++)
	{
		b[j+1]=b[j]/2;
	}
	for(k=0;i-k>=0&&j-k>=0;k++)
	{
		if(a[i-k]!=b[j-k])
		{
			break;
		}
	}
	printf("%d",a[i-k+1]);
}