int main()
{
	char str[300];
	char sub[300];
	char re[300];
	scanf("%s%s%s",str,sub,re);
	int i,j,k,first;
	int len=strlen(str);
	int len1=strlen(sub);
	int len2=strlen(re);
	first=0;
	for(i=0;i<len;i++)
	{
		if(str[i]==sub[0])
		{
			for(k=i,j=0;j<len1;j++,k++)
			{
				if(str[k]!=sub[j])
				{
					break;
				}
			}
		}
		if(j==len1)
		{
			first=i;
			break;
		}
	}
	if(j!=len1)
	{
		printf("%s",str);
	}else
	{
		for(i=0;i<first;i++)
		{
			printf("%c",str[i]);
		}
		printf("%s",re);
		for(i=(first+len2);i<len;i++)
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}