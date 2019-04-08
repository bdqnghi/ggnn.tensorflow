void main()
{
	char str[20000];
	char c;
	int a,n=0,i,j=0;
	int m[100];
	gets(str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if((c=str[i])!=' ')
		{
			if((c=str[i+1])!=' '&&i<(a-1))n++;
			else 
			{
				n++;
				m[j]=n;
				j++;
			}
		}
		else n=0;
	}
	for(i=0;i<(j-1);i++)
		printf("%d,",m[i]);
	printf("%d\n",m[j-1]);
}