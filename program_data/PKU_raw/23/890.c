void main()
{
	char *p,a[1000];
	int n,m=0;
	int i,j;

	p=a;
	
	gets(a); 
	n=strlen(a);
	for (i=n-1;i>=0;i--)
	{
		
		if(*(p+i)!=' ') m++; 
		if (*(p+i)==' ') 
		{
			
			for (j=i+1;j<=i+m;j++) printf("%c",*(p+j));
			printf(" ");
			m=0;
		}
		
	}
	for (i=0;i<n;i++)
	{
		printf("%c",*(p+i));
		if (*(p+i+1)==' ') break;
	}
}
