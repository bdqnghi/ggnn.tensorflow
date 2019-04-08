int main()
{
	char s[5000]={0};
	gets(s);
	int b,n = strlen(s),i,j,k;
	char a[50][50];
	b=0;
	k=0;
	int m = 0;
	for(i=0;k<n;i++)
	{
		b=0;
		for(j=0;k<n;j++)
		{	
			if(s[k]!=' ')
				a[i][j]	=s[k];
			if(s[k]==' ')
			{
				k++;
				a[i][j] = 0;
				break;
			}
			k++;	
		}
		if(k>=n)
			a[i][j] = 0;
	}
	m=i;
	int c=0,d;
	d=0;
	for(i=1;i<m;i++)
	{
		if(strlen(a[c])<strlen(a[i]))
			c=i;
		if(strlen(a[d])>strlen(a[i]))
			d=i;
	}
	printf("%s\n%s\n",a[c],a[d]);
	return 0;
}
