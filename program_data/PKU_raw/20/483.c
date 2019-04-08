int main()
{
	char a[11],b[4],temp=0;int t=0,i,n;
	while(scanf("%s%s",a,b)!=EOF)
	{
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]>temp)temp=a[i],t=i;
		}
		for(i=0;i<=t;i++)
		printf("%c",a[i]);
		printf("%s",b);
		for(i=t+1;i<n;i++)
		printf("%c",a[i]);
		printf("\n");
		t=0;temp=0;
	}
}