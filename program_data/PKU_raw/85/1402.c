int main()
{
	int i,j,n,t[200]={0};
	char a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		for(j=0;a[j];j++)
		{
			if((a[j]=='_')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9'&&j>0))
			{
				t[i]=1;
				continue;
			}
			else
			{
				t[i]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(t[i]) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
