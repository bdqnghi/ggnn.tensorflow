void main()
{
	int n,i,j,k=1,a[1000],s=0;
	char m[1000][40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",m[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(m[i]);
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			printf("%s",m[i]);
			break;
		}
		s=s+a[i]+1;
		if(s+a[i+1]<=80)
		{			
			printf("%s ",m[i]);
		
		}
		else
		{
			printf("%s",m[i]);
			printf("\n");
			s=0;
		}
	
	}
}