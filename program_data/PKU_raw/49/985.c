int main()
{
	char a[501];

	int i,n,k,j,flag,nf=0;
	gets(a);
	n=strlen(a);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<n-i+1;j++)
		{
			flag=1;
			for(k=0;k<i/2;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
				{
					flag=0;
					break;
				}
			}
			if(flag)
				{
					if(nf)
						printf("\n");
					for(k=0;k<i;k++)
						printf("%c",a[j+k]);
					
					nf=1;
				}
		}
	}
	return 0;
}