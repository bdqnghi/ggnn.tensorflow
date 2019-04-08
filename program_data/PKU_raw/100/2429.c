int main()
{
	char str[100];
	char str1[53]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	int a[52]={0};
	gets(str);
	int m=0,i,j,k=0;
	m=strlen(str);
	for(i=0;i<m;i++)
	{
		for(j=65;j<91;j++)
		{
			if(str[i]==j)
			{a[j-65]++;
			k++;}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=97;j<123;j++)
		{
			if(str[i]==j)
			{a[j-71]++;
			k++;}
		}
	}
	for(i=0;i<52;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",str1[i],a[i]);
		}
	}
	
	   if(k==0)
		printf("No");
		return 0;
}