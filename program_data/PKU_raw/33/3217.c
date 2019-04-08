int main()
{
	int n,i,m[1000],j;
	char s[1000][255];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
		m[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m[i]>=2)
		{
		   for(j=0;j<m[i]-1;j++)
		   {
	 		    if(s[i][j]=='A')
				   printf("T");
			    if(s[i][j]=='T')
				   printf("A");
		      	if(s[i][j]=='G')
				   printf("C");
			    if(s[i][j]=='C')
				   printf("G");
		   }
		   if(s[i][m[i]-1]=='A')
			  printf("T\n");
		   if(s[i][m[i]-1]=='T')
			  printf("A\n");
		   if(s[i][m[i]-1]=='G')
			  printf("C\n");
		   if(s[i][m[i]-1]=='C')
			  printf("G\n");
		}
		else
		{
			 if(s[i][0]=='A')
				   printf("T\n");
			 if(s[i][0]=='T')
				   printf("A\n");
		     if(s[i][0]=='G')
				   printf("C\n");
			 if(s[i][0]=='C')
				   printf("G\n");
		}
	}
	return 0;
}


