int main()
{
	char a[300]={'\0'},b[300]={'\0'};
	scanf("%s %s",a,b);
	int i,j,k=1,x=0,y=0,m,n;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(b);j++)
		{
			if(a[i]==b[j])
			{
				b[j]='1';
				k=k*0;
				break;
			}
		}
		if(k==0)
		{
			x=x+1;
		}
		k=1;
	}
	if(x==m&&m==n)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}