int main()
{
	char a[200],b[200];
	int i,j,n,k,m=0,num=0;
	
	gets(a);
	n=strlen(a);
	k=n-1;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]==' ')
		{
			strncpy(&b[m],&a[i],k-i+1);
			m=m+k-i+1;
			k=i-1;
		}
	}
	b[m]=' ';
	m++;
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			strncpy(&b[m],&a[0],i);
			break;
		}
	}
	for(j=0;j<n;j++)
	{
		if(a[j]==' ')
			num++;
	}
	if(num==0)
	{
		printf("%s",a);
	}
	else
	{
	for(j=1;j<m+i;j++)
		printf("%c",b[j]);
	}
	return 1;
}