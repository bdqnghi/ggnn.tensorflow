void main()
{
	int n, i, j, tmp, m[100];
	char a[21];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		tmp=0;
		scanf("%s", a);
		if(a[0]=='_'||(a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122))
		{
			tmp=0;
			for(j=1; j<strlen(a); j++)
			    if(!(a[j]=='_'||(a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122)||(a[j]>=48&&a[j]<=57)))
				{
				    m[i]=0;
					tmp=1;
					break;
				}
			if(tmp==0)
		        m[i]=1;
		}
		else
			m[i]=0;
	}
	for(i=0; i<n; i++)
	{
		if(m[i]==0)
			printf("no\n");
		else
			printf("yes\n");
	}
}