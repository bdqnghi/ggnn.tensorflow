int main()
{
	char a[21];
	int n,i,j,a1;
	int m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		m=0;
		scanf("%s",a);
		a1=strlen(a);
		for(j=0;j<a1;j++)
		{
			if(a[0]<='9'&&a[0]>='0')
			{
				printf("no\n");
				m+=1;
				break;
			}
			if((a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]<='9'&&a[j]>='0')||a[j]=='_')
			{
				m+=0;
			}
			else
			{
				m+=1;
			}
			if(m==1)
			{
				printf("no\n");
				break;
			}
		}
		if(m==0)
		{
			printf("yes\n");
		}
	}
	return 0;
}