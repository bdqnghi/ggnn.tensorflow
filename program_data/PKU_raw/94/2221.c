int main()
{
	int n,i,j,max=1,m;
	int sz[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		scanf("%d",&sz[i]);
		if(sz[i]>max&&sz[i]%2!=0)
			max=sz[i];
	}
	for(j=1;j<=max;j=j+2)
	{   
		
		if(j==max)
				printf("%d",j);
		else
		{
		for(m=0;m<n;m++)
		{
		     if(sz[m]==j)
				printf("%d,",j);
		}
		}
	}
			
return 0;
}