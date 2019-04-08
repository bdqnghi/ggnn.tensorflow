void main()
{
	char str1[100],str2[100];
	int count1[500]={0},count2[500]={0},i,n,m;
	scanf("%s%s",str1,str2);
	n=strlen(str1);
	m=strlen(str2);
	for(i=0;i<n;i++)
	{
		if(str1[i]<='Z'&&str1[i]>='A')
		{
			count1[str1[i]]++;
		}
		else if(str1[i]<='z'&&str1[i]>='a')
		{
			count1[str1[i]]++;
		}
	}
	for(i=0;i<m;i++)
	{
		if(str2[i]<='Z'&&str2[i]>='A')
		{
			count2[str2[i]]++;
		}
		else if(str2[i]<='z'&&str2[i]>='a')
		{
			count2[str2[i]]++;
		}
	}
	for(i=0;i<500;i++)
	{
		if(count1[i]!=count2[i])
		{
			printf("NO");
			break;
		}
	}
	if(i>=500)
		printf("YES");
}
	
