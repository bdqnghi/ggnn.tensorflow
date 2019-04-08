void main()
{
	int n,l,i,j,k;
	char a[30];

	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		k=0;
		gets(a);
        l=strlen(a);
		for(j=1;j<l;j++)
		{
			if((a[0]=='_'||(a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122))&&((a[j]>=48&&a[j]<=57)||(a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122)||a[j]=='_'))
			k=k+1;
		}
		if(k==l-1) printf("yes\n");
		else if(k<l-1) printf("no\n");
	}
}
