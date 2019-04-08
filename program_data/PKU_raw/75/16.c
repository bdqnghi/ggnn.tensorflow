int main()
{
	char s[10001]={'\0'},t[10001]={'\0'};
	int a[1001]={0},b[1001]={0},c[1000]={0},i=1,j=0,m,n,k;
	gets(s);m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			a[j]=a[j]*10+s[i]-48;
		else
			
               if(s[i-1]>='0'&&s[i-1]<='9')
			      j++;
	}
	
	if(s[m-1]>='0'&&s[m-1]<='9')
		m=j+1;
	else
		m=j;
	gets(t);n=strlen(t);j=0;
	for(i=0;i<n;i++)
	{
		if(t[i]>='0'&&t[i]<='9')
			b[j]=b[j]*10+t[i]-48;
		else
			
               if(t[i-1]>='0'&&t[i-1]<='9')
			      j++;
	}
	
	if(t[n-1]>='0'&&t[n-1]<='9')
		n=j+1;
	else
		n=j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=a[j]&&i<b[j])
				c[i]++;
		}
	}
	k=c[0];
	for(i=0;i<1000;i++)
	{
	    if(c[i]>k)
			k=c[i];
	}
	
	printf("%d %d",n,k);
	
	return 0;
}

