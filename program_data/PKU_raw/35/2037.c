int main()
{
	int m,n,i,j,J,k,M,t;
	int a[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);
	}	
	for(i=0;i<m;i++)
	{
		M=a[i][0];J=0;t=1;
		for(j=1;j<n;j++)
		{
			if(a[i][j]>M)
			{
				M=a[i][j];
				J=j;
			}
		}
		for(k=0;k<m;k++)
		{
			if(a[k][J]<a[i][J]) t=0;
		}
		if(t==1){printf("%d+%d",i,J);break;}
	}
	if(t==0) printf("No");
	return 0;
}
