int main()
{
	int i,j=0,k,l;
	char a[101],b[101];
	gets(a);
	k=strlen(a);
	for(i=0;i<=k;i++)
	{
		if(a[i]==a[i+1]&&a[i]==' ')
		{
			continue;
		}
		else
		{
			b[j]=a[i];
			j++;
		}
	}

	puts(b);
	return 0;
}