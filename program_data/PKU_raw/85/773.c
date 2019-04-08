int main()
{
	int i,j,n,l,result[20];
	char a[20][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))
		{
		    for(j=1;j<l;j++)
			{
				if(!((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]=='_')||(a[i][j]>='0'&&a[i][j]<='9')))
				{
					result[i]=0;
				    break;
				}
				if(j==l-1)
				{
					result[i]=1;
				}
			}
		}
		else
		{
			result[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(result[i]==0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
	}
	return 0;
}