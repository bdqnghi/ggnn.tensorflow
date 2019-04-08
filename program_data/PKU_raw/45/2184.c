void main()
{
	char a[50], b[50];
	int i, j, p;
	scanf("%s%s", a, b);
	for(i=0; i<=strlen(b)-strlen(a); i++)
	{
		p=1;
		for(j=0; j<strlen(a); j++)
			if(b[i+j]!=a[j])
				p=0;
		if(p) break;
	}
	printf("%d\n", i);
}