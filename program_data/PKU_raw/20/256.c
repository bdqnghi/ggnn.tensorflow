void main()
{
	char str[3],c[1000][15];
	char t;
	int i,j,k,n=0;
	int a[1000];
	for(i=0;i<1000;i++)
	{gets(c[i]);
	if(c[i][0]!='\0')
	{
	a[i]=strlen(c[i]);
	n++;}
	else break;
	}
	for(i=0;i<n;i++)
	{t=c[i][0];
	str[1]=c[i][a[i]-3];
	str[2]=c[i][a[i]-2];
	str[3]=c[i][a[i]-1];
	    
	for(j=0;j<a[i]-4;j++)
		if(t<c[i][j])
			t=c[i][j];
	for(j=0;j<a[i]-4;j++)
		if(t==c[i][j])
		{
		for(k=a[i]-1;k>=j+4;k--)
			c[i][k]=c[i][k-3];
		c[i][a[i]-1]='\0';
		c[i][j+1]=str[1];
		c[i][j+2]=str[2];
		c[i][j+3]=str[3];
		break;
		}		

	}
	for(i=0;i<n;i++)
		printf("%s\n",c[i]);
}
