int main()
{
	int i,j,min,max,k,l,n,a[200];
	char ch[1001],str[200][20];
	gets(ch);
	n=strlen(ch);
	ch[n]='\0';
	for (i=0;i<n;i++)
	{
		if (ch[i]==',')
			ch[i]=' ';
		if ((ch[i]==' ')&&(ch[i+1]==' '))
		{
			for (j=i+1;j<n-1;j++)
			{
				ch[j]=ch[j+1];
			}
			n=n-1;
		}
	}
	l=0;
	k=0;
	for (i=0;i<n;i++)
	{

		if ((ch[i]==' ')&&(i!=0)&&(i!=n-1))
		{l=l+1;k=0;}
		else
		{str[l][k]=ch[i];
		a[l]=k;
		k=k+1;}
	}
	if (l==0)
	{for(i=0;i<a[0]+1;i++)
	printf("%c",str[0][i]);
	printf("\n");
	for(i=0;i<a[0]+1;i++)
	printf("%c",str[0][i]);}
	else
	{min=a[0];
	max=a[0];
	n=0;
    k=0;
	for (i=0;i<=l;i++)
	{
		if (a[i]<min)
		{min=a[i];n=i;} 
			if (a[i]>max)
			{max=a[i];k=i;}
	}
	if(min == max)
	{for(i=0;i<a[0]+1;i++)
	printf("%c",str[0][i]);
	printf("\n");
	for(i=0;i<a[0]+1;i++)
	printf("%c",str[0][i]);}
	else
	{
		for (i=0;i<max+1;i++)
			printf("%c",str[k][i]);
		printf("\n");
		for (i=0;i<min+1;i++)
			printf("%c",str[n][i]);
	}}
	return 0;
}
