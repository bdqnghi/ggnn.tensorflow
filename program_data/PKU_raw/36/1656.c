int main()
{
	char ch1[205],ch2[205],ch[205];
	int i,k=0,m,n,j,a,b=0,c=0;
    gets(ch);
	m=strlen(ch);
	n=m/2;
	for(i=0;i<n;i++)
		ch1[i]=ch[i];
	for(i=n+1;i<m;i++)
	{	
		ch2[k]=ch[i];
		k++;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(ch1[i]<ch1[j])
			{
				a=ch1[i];
				ch1[i]=ch1[j];
				ch1[j]=a;
			}
		}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(ch2[i]<ch2[j])
			{
				a=ch2[i];
				ch2[i]=ch2[j];
				ch2[j]=a;
			}
		}
    for(i=0;i<n;i++)
	{	
		if(ch1[i]==ch2[i])
			b++;
		else
			c++;
	}
	if(b==n)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}