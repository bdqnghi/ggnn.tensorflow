int main()
{
	char a[50],b[50],i,j,m;
	scanf("%s %s", a,b);
	m=0;
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		if(b[i]!=a[0])
		{
			continue;
		}
		for(j=0;j<strlen(a);j++)
		{
			if(b[i+j]==a[j])
			{
				m++;
			}
		}
		if(m==strlen(a))
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}