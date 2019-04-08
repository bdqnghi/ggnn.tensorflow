int main()
{
	int i,j,n,m;
	char *p[100];
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
		*(p+i)=(char *)malloc(80*sizeof(char));
	for (i=0;i<n;i++)
		gets(*(p+i));
	for (i=0;i<n;i++)
	{
		m=0;
		if (!((*(*(p+i))=='_')||((*(*(p+i))>=65)&&(*(*(p+i))<=90))||((*(*(p+i))>=97)&&(*(*(p+i))<=122))))
			m=1;
		else
		{
			for (j=0;j<strlen(*(p+i));j++)
			{
				if (!((*(*(p+i)+j)=='_')||((*(*(p+i)+j)>=65)&&(*(*(p+i)+j)<=90))||((*(*(p+i)+j)>=97)&&(*(*(p+i)+j)<=122))||((*(*(p+i)+j)>=48)&&(*(*(p+i)+j)<=57))))
				{
					m=1;
					break;
				}
			}
		}
		if (m==0)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}