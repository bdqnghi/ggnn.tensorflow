int main()
{
    int n,i,j;
	char c[256];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

	    scanf("%s",c);
		for(j=0;j<strlen(c);j++)
		{
              if(c[j]=='A') 
			  {
				  c[j]='T';
				  continue;
			  }
			  if(c[j]=='T')
			  {
				  c[j]='A';
				  continue;
			  }
			  if(c[j]=='C')
			  {
			      c[j]='G';
				  continue;
			  }
			  if(c[j]=='G')
			  {
                  c[j]='C';
				  continue;
			  }
		}
			printf("%s",c);
		printf("\n");
	}
	return 0;
}