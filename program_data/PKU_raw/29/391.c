int main()
{

	int m,n[100],i,j;
	float a[100],b[100],c[100];
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	a[0]=2;b[0]=1;
	for(i=0;i<m;i++)
	{   
		c[i]=2/1;
		for(j=1;j<n[i];j++)
		{
			
			b[j]=a[j-1];
			a[j]=a[j-1]+b[j-1];
			c[i]=c[i]+a[j]/b[j];
		}
		printf("%.3f\n",c[i]);
	}

return 0;
}