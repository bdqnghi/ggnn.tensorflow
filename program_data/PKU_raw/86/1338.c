// ????.cpp : Defines the entry point for the console application.
//



int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;++i)
	{
		int a[21],j=0;
		int m;
		scanf("%d",&m);
                  if(m==0) 
		{
			printf("60\n");
			continue;
		}
		for(j=1;j<=m;++j) scanf("%d",&a[j]);
		int t[21];
		for(j=1;j<=m;++j)
		{
			t[j]=a[j]+3*j;
			if(t[j]>=63) 
			{
				printf("%d\n",a[j-1]+60-t[j-1]);
				break;
			}
			else if(t[j]>=60)
			{
				printf("%d\n",a[j]);
				break;
			}
		}
		if(j==m+1) printf("%d\n",a[m]+60-t[m]);
	}
	return 0;
}

