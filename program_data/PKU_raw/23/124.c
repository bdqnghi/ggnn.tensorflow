void main()
{
	char sent[100];
	int n,i,j,k=0,m;
	gets(sent);
	n=strlen(sent);
	for(i=n-1;i>=0;i--)
	{	
		if(sent[i]==' ')
		{
			k++;m=i;
			for(j=i+1;sent[j]!=' '&&j<n;j++)
			{
				printf("%c",sent[j]);
			}
			printf(" ");
		}
	
	}	
	if(k==0)
		puts(sent);
	else
		for(i=0;i<m;i++)
			printf("%c",sent[i]);
	
}
