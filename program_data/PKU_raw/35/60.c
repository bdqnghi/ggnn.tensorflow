void main()
{
	int a[8][8],b[8],c[8];
	int m,n,i,j,k,t=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
	}
	for(i=0;i<m;i++)
	{
		k=0;
		for(j=0;j<n-1;j++)
		{
			if(a[i][j]<a[i][j+1])k=j+1;
		}
        b[i]=a[i][k];
		
	}
    for(j=0;j<n;j++)
	{
		k=0;
		for(i=0;i<m-1;i++)
		{
			if(a[i][j]>a[i+1][j])k=i+1;
		}
        c[j]=a[k][j];
       
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{if(b[i]==c[j]){printf("%d+%d",i,j);t=1;}}
	}
if(t==0)printf("No");
}