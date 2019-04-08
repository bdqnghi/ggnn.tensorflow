void main()
{
	char a[100],b[100];
	int i,j,k,m,n,sig=0;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]==a[i])
				{
					b[j]=0;
					break;
				}
				
			}
			if(j==n)
				{printf("NO");
				break;}
		}
		if(i==n)
			printf("YES");
		 
	}
	else
		printf("NO");
}

	

		
	