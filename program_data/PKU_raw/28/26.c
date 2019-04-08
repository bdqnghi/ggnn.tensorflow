void main()
{
	char a[10000];
	int i=0,k=0,m=1,b[300]={0},l=0;
	while((a[i]=getchar())!='\n')
	{
		i++;k++;
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==' '&&a[i+1]!=' ')
		{
			m++;l++;
		}
		if(a[i]!=' ')
			b[l]++;
	}
	for(i=0;i<m-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[m-1]);
}