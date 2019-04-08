int main()
{
	int k,i,j,m;
	char a[550];
	gets(a);
	k=strlen(a);
	for(i=k;i>=1;i--)
	{a[i]=a[i-1];}
	i=2;
	while(i<k)
	{
		j=1;
		while(j<=k-i+1)
		{
			m=j;
			while(m<=j+i-1)
			{
				if(a[m]!=a[2*j+i-1-m]) break;
				m=m+1;
			}
			if(m==i+j)
			{
				for(m=j;m<=j+i-1;m++)
				{printf("%c",a[m]);}
				printf("\n");
			}
			j=j+1;
		}
		i=i+1;
	}
	return 0;
}