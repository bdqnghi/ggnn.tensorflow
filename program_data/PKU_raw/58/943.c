int main()
{
	char a[A],c;
    int n,i,l,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n");
		j=0;
		gets(a);
		l=strlen(a);
		if(a[0]=='_'||('a'<=a[0]&&a[0]<='z')||('A'<=a[0]&&a[0]<='Z'))
		{
            for(j=1;j<l;j++)
			{
				if(a[j]=='_'||('a'<=a[j]&&a[j]<='z')||('A'<=a[j]&&a[j]<='Z')||('0'<=a[j]&&a[j]<='9')) ;
				else break;
			}
		}
		if(j==l) printf("1\n");
		else  printf("0\n");
    }
	return 0;
}