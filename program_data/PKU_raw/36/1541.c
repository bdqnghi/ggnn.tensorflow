int main()
{
	char s1[100]={0},s2[100]={100};
	int len1,len2,i,j,f[100]={0},flag;
	scanf("%s%s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1!=len2)
	{
		printf("NO");
		return 0;
	}
	for(i=0;i<len1;i++)
	{
		flag=0;
		for(j=0;j<len2;j++)
		{
			if(s2[j]==s1[i] && f[j]==0)
			{
				f[j]=1;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}