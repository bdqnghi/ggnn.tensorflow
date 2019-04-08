inserting(char a[],char b[])
{
	int i,k,n;
	char c;
	n=strlen(a);
	c=a[0];
    for(i=1;i<15;i++)
		if(c<a[i]) 
		{
			k=i;
			c=a[i];
		}
	for(i=n-1+3;i>k+3;i--)
		a[i]=a[i-3];
	for(i=k+1;i<k+4;i++)
		a[i]=b[i-k-1];
	for(i=0;i<n+3;i++)printf("%c",a[i]);
	printf("\n");
}
void main()
{
	int i,j,k,n,m;
	char str[100][50],str1[100][50];
	i=0;
	do
	{
		gets(str[i]);
		i++;
		n=strlen(str[i-1]);
	}
	while(n!=0);
	for(k=0;k<i-1;k++)
	{
		for(j=0;j<50;j++)
			if(str[k][j]==' ') 
			{
				m=j;
				str[k][j]='\0';
				break;
			}
		for(j=m+1;j<m+4;j++)
		{
			str1[k][j-m-1]=str[k][j];
			str[k][j]='\0';
		}
	}
	for(j=0;j<i-1;j++)
		inserting(str[j],str1[j]);
}
