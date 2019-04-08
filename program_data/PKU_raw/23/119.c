void main()
{
	char a[100]={0};
	int n,i,j,k,p,m=0;
	gets(a);
	n=strlen(a);

	k=n-1;
	for(p=0;p<n;p++)
		if(a[p]==' ')
			m=m+1;

  if(m!=0)
  {
	for(i=(n-1);i>=0;i--)
	{
		if(a[i]==' ')
		{
			for(j=(i+1);j<=k;j++)
				printf("%c",a[j]);
			printf("%c",a[i]);
                
			k=i-1;
		}
		
	}
	for(i=0;i<n;i++)
		if(a[i]==' ')
		{
			for(j=0;j<i;j++)
				printf("%c",a[j]);
			break;
		}
  }
  else 
	  puts(a);
}
