void count(int a[53], char str[], int len)
{
	int i,m;
	for(i=0;i<=len-1;i++)
	{
		m=str[i];
		a[m]++;
	}
}

int main()
{
	int a1[200]={0},a2[200]={0};
	int len1,len2,t=1,i;
	char str1[1000]={0},str2[1000]={0};
	scanf("%s",str1);
	scanf("%s",str2);
	len1=strlen(str1);
	len2=strlen(str2);
	count(a1,str1,len1);
	count(a2,str2,len2);
	for(i=1;i<=199;i++)
	{
		if(a1[i]!=a2[i]) t=0;
	}
	if(t==1)
		printf("YES\n");
	else if(t==0)
		printf("NO\n");
	return 0;
}



