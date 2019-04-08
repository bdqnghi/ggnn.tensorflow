int main()
{
	char s[1000],c[100][50];
	int a[50],i,j=0,k=0;
	gets(s);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]!=' ')
		{
		c[j][k]=s[i];
		k++;
		}
		else {
			c[j][k+1]=0;
			k=0;
			j++;
		}
	}
	c[j][k+1]=0;
	int n=j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(strlen(c[j])<=strlen(c[j+1]))
			{
				char p[50];
			strcpy(p,c[j]);
			strcpy(c[j],c[j+1]);
			strcpy(c[j+1],p);
			}
		}
	}
	cout<<c[0]<<endl<<c[n]<<endl;
	return 0;
}
		
		
