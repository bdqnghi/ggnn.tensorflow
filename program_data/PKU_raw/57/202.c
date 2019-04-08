void main()
{
	int n,m,i;
	char a[50][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		m=strlen(a[i]);
		if(m>1)
		{
			if(a[i][m-1]=='r'&&a[i][m-2]=='e')
		    	a[i][m-2]=0;
		    if(a[i][m-1]=='y'&&a[i][m-2]=='l')
		     	a[i][m-2]=0;
		}
		if(m>2)
			if(a[i][m-1]=='g'&&a[i][m-2]=='n')
		      	if(a[i][m-3]=='i')
			    	a[i][m-3]=0;
	}
	for(i=0;i<n;i++)
	{
		if(i>0)
			printf("\n");
		printf("%s",a[i]);
	}
}
