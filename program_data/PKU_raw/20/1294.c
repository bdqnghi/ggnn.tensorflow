int main()
{
	int i,j,k,n;
    char str[11],substr[4];
	while(scanf("%s %s",&str,&substr)!=EOF)
	{
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<n;j++)
				if(str[i]>=str[j]) k++;
			if(k==n) break;
		}
		for(j=0;j<=i;j++) printf("%c",str[j]);
		printf("%s",substr);
		for(j=i+1;j<n;j++) printf("%c",str[j]);
	printf("\n");
	}
	return 0;
}