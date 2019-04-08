int main()
{
	int i,j,n,r,flag,k;
	char a[501],b[501];
	gets(a);
	n=strlen(a);
	for(i=2;i<=n;i++)
	{
		for(j=0;j+i-1<n;j++)
		{
			flag=0;
			for(k=1;k<=i;k++)
			{
				if(a[j+k-1]==a[j+i-k])
					continue;
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				for(r=1;r<=i;r++)
					printf("%c",a[j+r-1]);
				printf("\n");
			}
		}
	}
	return 0;
}