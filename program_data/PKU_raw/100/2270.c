int main()
{
	char a[310]={0};
	int i,j,b[52]={0};
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>96&&a[i]<123)
		{
			for(j=97;j<=122;j++)
			{
				if(a[i]==j) b[a[i]-71]++;
			}
		}
		else if(a[i]>64&&a[i]<91)
		{
			for(j=65;j<=90;j++)
			{
				if(a[i]==j) b[a[i]-65]++;
			}
		}
	}
	for(i=0;i<52;i++)
	{
		if(i<26&&b[i]!=0) printf("%c=%d\n",i+65,b[i]);
		else if(i>25&&b[i]!=0) printf("%c=%d\n",i+71,b[i]);
		continue;
	}
	j=0;
	for(i=0;i<52;i++)
	{
		if(b[i]!=0) j++;
	}
	if(j==0) printf("No");
}