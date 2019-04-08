int a[1000][1000];
int main()
{
	int n,i,j,n1,n2,n3,n4,sum;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		
		{
			if(a[i][j-1]!=0&&a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0&&a[i-1][j]!=0)
			{n1=i;n2=j;}
		    if(a[i][j-1]==0&&a[i][j]==0&&a[i][j+1]!=0&&a[i+1][j]!=0&&a[i-1][j]==0)
			{n3=i;n4=j;}
		    
		}
	}	
	sum=(n3-n1+1)*(n4-n2+1)-2*(n3-n1+1)-2*(n4-n2+1-2);
        printf("%d",sum);
		
	return 0;
}