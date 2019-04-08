int main()
{
	int n,i,l,j;
	char a[256],t='T',b='A',g='G',c='C';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(a[j]=='A')
				printf("%c",t);
			if(a[j]=='T')
				printf("%c",b);
			if(a[j]=='C')
				printf("%c",g);
			if(a[j]=='G')
				printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}