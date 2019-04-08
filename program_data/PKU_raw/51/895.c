int main()
{
	int n,i,j,k;
	int t,m;
	char s[501],str[500][5];
	int a[500];
	scanf("%d",&n);
	scanf("%s",s);
	t=strlen(s);
	memset(str,'\0',sizeof(str));
	for(i=0;i<=t-n;i++)
		a[i]=1;
	for(i=0;i<=t-n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			str[i][k]=s[i+j];
		     k++;
		}
	}
	for(i=0;i<t-n;i++)
		for(j=i+1;j<=t-n;j++)
			if(str[i][0]!='0' && str[j][0]!='0' && strcmp(str[i],str[j])==0)
			{
				a[i]++;
				for(k=0;k<n;k++)
					str[j][k]='0';
			}
	m=a[0];
	for(i=1;i<=t-n;i++)
	{
		if(m<a[i])
			m=a[i];
	}
	if(m<2)
	{
		printf("NO\n");
		return 0;
	}
	else
	{
	    printf("%d\n",m);
        for(i=0;i<=t-n;i++)
	    	if(a[i]==m)
			    printf("%s\n",str[i]);
	}
	return 0;
}




