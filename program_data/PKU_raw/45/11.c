void main()
{
	int k,i,i1,n;
	char a[51]={0},b[51]={0};
	scanf("%s%s",a,b);
	k=strlen(a);
	n=strlen(b);
	for (i=0;i<n;i++)
	{
		int j=0,l=0;
		if (a[j]==b[i])
		{
			i1=i;

		while (j<=k-2&&i1<=n-2&&a[j]==b[i1]&&a[j+1]==b[i1+1])
		{

			l++;
			j++;
			i1++;
		}
		}
		if (l==k-1)
		{
			printf("%d",i);
			break;
		}

	}




	
}