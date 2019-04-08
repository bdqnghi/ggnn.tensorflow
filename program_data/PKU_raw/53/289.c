int main()
{
	int i,j,k;
    int m,n;		
	int a[300];
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;)
	{	
		scanf("%d",&m);
			
			for(j=0;j<i;)
			{
				if(m==a[j])	{n--;break;}
				if(m!=a[j])	j++;
			}
			if(i==j)	{a[i]=m;i++;}
			
		
	}
	for(k=0;k<n-1;k++)
		printf("%d,",a[k]);
	printf("%d",a[n-1]);
	return 0;
}