void main()
{
	char a[30000];
	int b[300]={0},n,i,j=0,k=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' '&&k==0)
			b[j]=b[j]+1;
		else if(a[i]==' '&&k==0)
		{
			j++;
			k=1;
		}
		else if(a[i]!=' '&&k==1)
		{
			k=0;
			b[j]=b[j]+1;
		}
	}
	if(b[j]==0)
		j=j-1;
	if(a[0]==' ')
	{
		for(i=1;i<=j-1;i++)
			printf("%d,",b[i]);
		printf("%d",b[j]);
	}
	else
	{
		for(i=0;i<=j-1;i++)
			printf("%d,",b[i]);
		printf("%d",b[j]);
	}
}