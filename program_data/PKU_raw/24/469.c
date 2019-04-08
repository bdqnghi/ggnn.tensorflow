void main()
{
	char v[2000],a[50][50];
	int i=0,m=100,n=0,p1,p2,k=0,j=0;
	while((v[i]=getchar())!='\n')
	{
		if(v[i]!=' ')
		{
			a[j][k]=v[i];
			k++;
		}
		if(v[i]==' ')
		{
			a[j][k]='\0';
			j++;
			k=0;
		}
		i++;
	}
	a[j][k]='\0';
	for(i=0;i<=j;i++)
	{
		if(strlen(a[i])>n)
		{
			n=strlen(a[i]);
			p1=i;
		}
		if(strlen(a[i])<m)
		{
			m=strlen(a[i]);
			p2=i;
		}
	}
			printf("%s\n",a[p1]);
			printf("%s\n",a[p2]);
}
