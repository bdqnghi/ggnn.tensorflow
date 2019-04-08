main()
{
	int n,i,j,m,k=0;
	scanf("%d\n",&n);
	char **a;
	char *b[100];
	for(i=0;i<n;i++)
		b[i]=(char *)malloc(80*sizeof(char));
	a=b;
	for(i=0;i<n;i++)
	{
		gets(*(a+i));
		m=strlen(*(a+i));
		for(j=0;j<m;j++)
		{
			if(j==0&&((**(a+i)=='_')||(**(a+i)>='A'&&**(a+i)<='Z')||(**(a+i)>='a'&&**(a+i)<='z')))
				k++;
			if(j>0&&((*(*(a+i)+j)>='0'&&*(*(a+i)+j)<='9')||(*(*(a+i)+j)>='A'&&*(*(a+i)+j)<='Z')||(*(*(a+i)+j)>='a'&&*(*(a+i)+j)<='z')||(*(*(a+i)+j)=='_')))
				k++;
		}
		if(k==m) printf("1\n");
		else printf("0\n");
		k=0;
	}
}