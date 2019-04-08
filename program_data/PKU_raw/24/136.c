void main()
{
	char c,t[80],a[50][80];
	int i,j,n=0;
	for(c=getchar();c!='\n';)
	{
		for(i=0;c!=' '&&c!='\n';i++)
		{
			a[n][i]=c;
			c=getchar();
		}
		a[n][i+1]='\0';
		n++;
		if(c==' ')
			c=getchar();
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strlen(a[j])>strlen(a[i]))
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	printf("%s\n%s",a[0],a[n-1]);
}