int main()
{
	int i,j,k=0,m=0,n=0,len,lon[50],max=0,min=100;
	char a[2000],word[50][40];
	gets(a);
    len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			for(j=k;j<i;j++)
			{
				word[m][n]=a[j];
				n++;
			}
			word[m][n]='\0';
			lon[m]=n;
			k=i+1;
			m++;
			n=0;
		}
	}
	for(j=k;j<len;j++)
	{
		word[m][n]=a[j];
		n++;
	}
	word[m][n]='\0';
	lon[m]=n;
	for(i=0;i<=m;i++)
	{
		if(max<lon[i])
		{
			max=lon[i];
		}
		if(min>lon[i])
		{
			min=lon[i];
		}
	}
	for(i=0;i<=m;i++)
	{
		if(max==lon[i])
		{
			printf("%s\n",word[i]);
			break;
		}
	}
	for(i=0;i<=m;i++)
	{
		if(min==lon[i])
		{
			printf("%s\n",word[i]);
			break;
		}
	}
	return 0;
}