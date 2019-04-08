void main()
{
	char str[11],substr[4],a[11];
	
	int j,k,i,n,m;
	

	while(scanf("%s%s",str,substr)!=EOF)
        {
	n=strlen(str);
         m=strlen(substr);
             for(j=0;j<n;j++)	
	   a[j]=str[j];
	 
		for(k=1;k<n;k++)
			   if(a[0]<a[k])
				 a[0]=a[k];	
	for(j=0;j<n;j++)
	{
		printf("%c",str[j]);
		if(str[j]==a[0])
			break;
	}
	for(k=0;k<m;k++)
		printf("%c",substr[k]);
	for(i=(j+1);i<n;i++)
		printf("%c",str[i]);
         printf("\n");
	}
}	
