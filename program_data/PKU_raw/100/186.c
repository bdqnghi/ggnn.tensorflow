void main()
{
	char c[301]={'\0'};
	int a[26]={0},i,j,k=0;
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		for(j=0;j<26;j++)
		{
			if(c[i]==97+j) 
				a[j]=a[j]+1;
		}
	}
	for(j=0;j<26;j++)
	{
		if(a[j]==0) continue;
		printf("%c=%d\n",97+j,a[j]);
		k=k+1;
	}
	if(k==0) printf("No\n");
}
