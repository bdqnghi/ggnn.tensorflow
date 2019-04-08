void main()
{
	char a[2000];
	int k[200]={0},i,j=1,n,m=1,l=1,o[200]={0};
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=','&&a[i]!=' ')
		{k[j]++;}
		else
		{
			if(a[i]==' ')
			{o[j]=i;j++;}
			
		}
	}
	o[j]=n;
	
		for(i=1;i<=j;i++)
	{
		for(l=1;l<=j;l++)
		{
			if(k[i]<k[l])break;
		}
		if(l==j+1)
		break;
	}
			for(l=o[i]-k[i];l<o[i];l++)
		printf("%c",a[l]);
	printf("\n");
	for(i=1;i<=j;i++)
	{
		for(l=1;l<=j;l++)
		{
			if(k[i]>k[l])break;
		}
		if(l==j+1)
		break;
	}
	for(l=o[i]-k[i];l<o[i];l++)
		printf("%c",a[l]);

}
