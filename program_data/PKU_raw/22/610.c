void main()
{
	int i,j,k,n,t,r[300],flag=0;
	char s[1200];
	gets(s);
	n=strlen(s);
	for(i=0,k=-1;i<=n-1;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			flag=1;
			k++;
			for(j=i,r[k]=s[i]-'0';s[j+1]>='0'&&s[j+1]<='9';j++)
				r[k]=10*r[k]+s[j+1]-'1'+1;
			i=j;
		}
	}
	for(i=0;i<=k-1;i++)
	{
		for(j=0;j<=k-1-i;j++)
		{
			if(r[j]>r[j+1])
			{
				t=r[j];r[j]=r[j+1];r[j+1]=t;}}
	}
	if(flag==0||k==0||r[0]==r[k])printf("No");
	if(flag==1)
	{
		for(i=k;i>=1;i--)
		{
			if(r[i-1]<r[i]){printf("%d",r[i-1]);break;}
		}
	}

}

