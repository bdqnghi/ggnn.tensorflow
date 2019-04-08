int main()
{
	char d[1000];
	char words[300][256]={0};
	int n=1;
	int i,j,k=-1,p,q;
	int len[300];
	gets(d);
	for (i=0;d[i]!='\0';i++)
	{
		if (d[i]==' '&&d[i-1]!=' ')
		{	
			n++;
		}
	}
	for (i=0;i<n;i++)
	{
		q=0;
		for (p=k+1;d[p]==' ';p++)
		{
			q++;
		}
		for (k=k+1+q,j=0;d[k]!='\0'&&d[k]!=' ';j++,k++)
		{
			words[i][j]=d[k];
		}
		words[i][j]='\0';
	}
	len[0]=strlen (words[0]);
	printf ("%d",len[0]);
	for (i=1;i<n;i++)
	{
		len[i]=strlen (words[i]);
		printf (",%d",len[i]);
	}
	return 0;
}