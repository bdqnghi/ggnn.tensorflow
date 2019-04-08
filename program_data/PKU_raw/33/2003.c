
int main()
{
	char a[1000][256];
	int i, k, n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;;k++)
		{
			if(a[i][k]=='\0') 
			{
				printf("%s\n",a[i]);
				break;
			}
			if(a[i][k]=='A') a[i][k]='T';
			else if(a[i][k]=='T') a[i][k]='A';
			else if(a[i][k]=='C') a[i][k]='G';
			else a[i][k]='C';
		}
	}
	return 0;
}
