int main()
{
	int i,n,l,j;
	int a[100],b[100];
	char e[100];
	char c[100][100];
	char d[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
		strcpy(d[i],c[i]);
		a[i]=strlen(c[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				l=a[i];a[i]=a[j];a[j]=l;
				strcpy(e,d[i]);strcpy(d[i],d[j]);strcpy(d[j],e);
			}
		}
	}
	if(a[0]>a[1])
		printf("%s\n",d[0]);
	else
	{
		for(i=0;i<n;i++)
		{
			if(b[i]==a[0])
			{
				printf("%s\n",c[i]);
				break;
			}
		}
	}
	if(a[n-1]<a[n-2])
		printf("%s\n",d[n-1]);
	else
	{
		for(i=0;i<n;i++)
		{
			if(b[i]==a[n-1])
			{
				printf("%s\n",c[i]);
				break;
			}
		}
	}
	return 0;
}