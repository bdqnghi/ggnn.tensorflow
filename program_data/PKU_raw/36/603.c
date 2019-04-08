void main()
{
	int i,j;
	int m,n,k=0,t=0;
	char a[100],b[100];
	scanf("%s %s",a,b);

	m=strlen(a);
	n=strlen(b);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				k=k+1;
				a[j]='*';
				break;
			}
		}
	}

	if(k==n&&m==n) printf("YES");
	else printf("NO");
}