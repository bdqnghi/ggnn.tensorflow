int main()
{
	char a[256],b[256],c[256];
	int i,j,n;
	scanf("%s%s%s",a,b,c);
	n=strlen(b);
	int m;
	m=strlen(a);
	int q,k;
	for(i=0;i<m;i++)
	{
		if(a[i]==b[0])
		{
			k=1;
			for(j=i;j<i+n;j++)
				if(b[j-i]!=a[j])
					k=0;
			if(k)
			{	q=i;		
			break;
			}
		}
		k=0;
	}
	if(k)
	{
	for(i=0;i<q;i++)
		printf("%c",a[i]);
	printf("%s",c);

		for(i=q+n;i<m;i++)
		printf("%c",a[i]);
	}
	else
	{
		printf("%s",a);
	}return 0;	
}