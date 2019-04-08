void main()
{
	char a[1000];
	int b[1000]={0},i,j=0,n;
	gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
	{
		if(a[i]==' ')j++;
		while(a[i]==' ')i++;
		b[j]++;
	}
    for(i=0;i<j;i++)
		printf("%d,",b[i]);
	printf("%d",b[j]);
}


