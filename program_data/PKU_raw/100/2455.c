int main()
{
	char str[301];
	int len,i,A[26]={0},a[26]={0},flag=1,k;
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(k=0;k<26;k++)
		{
			if(str[i]=='A'+k)
			{
				A[k]++;
				break;
			}
			if(str[i]=='a'+k)
			{
				a[k]++;
				break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(A[i]!=0)
		{
			printf("%c=%d\n",'A'+i,A[i]);
			flag=0;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",'a'+i,a[i]);
			flag=0;
		}
	}
	if(flag)
		printf("No");
	return 0;
	
}