// ??????.cpp : ??????????????
//


int main()
{
	char a[200][100];
	int i,j,k,l[200],m;
	for(i=0;i<=199;++i)
	{
		for(j=0;j<=99;++j)
		{
			scanf("%c",&a[i][j]);
		    if(a[i][j]==' ')
		    {
			    a[i][j]='\0';
				break;
			}
			if(a[i][j]=='\n') break;
		}
		l[i]=j;
		if(a[i][j]=='\n')
		{
			a[i][j]='\0';
			break;
		}
	}
	m=0;
	for(k=0;k<=i;++k)
	{
		if(m<l[k]) m=l[k];
	}
	for(k=0;k<=i;++k)
	{
		if(m==l[k]) break;
	}
	printf("%s\n",a[k]);
	m=9999;
	for(k=0;k<=i;++k)
	{
		if(m>l[k]) m=l[k];
	}
	for(k=0;k<=i;++k)
	{
		if(m==l[k]) break;
	}
	printf("%s\n",a[k]);
	return 0;
}
