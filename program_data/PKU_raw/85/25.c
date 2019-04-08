int main()
{
	int n,i;
	char a[100];
	int m=1;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a);
		int j=1;
		if((a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122)||a[0]==95)
		{
			m=1;
			while(a[j]!='\0')
			{
				if(a[j]<48||(a[j]>57&&a[j]<65)||(a[j]>90&&a[j]<95)||a[j]==96||a[j]>122)
				{
					m=0;
				}
				j++;
			}
			if(m==1)
				printf("yes\n");
			if(m==0)
				printf("no\n");
		}
		else
			printf("no\n");
	}
	return 0;
}