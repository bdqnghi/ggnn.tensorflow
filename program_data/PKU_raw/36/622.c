void main()
{
	char str1[100]={""},str2[100]={""};
	int i,j,len1,len2,flag=1;
	scanf("%s%s",str1,str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2)
		printf("NO\n");
	else
	{
		for(i=0;i<len1;i++)
		{
			for(j=0;j<len1;j++)
			{
				if(str1[i]==str2[j])
				{
					str2[j]=0;
					break;
				}
			}
			if(j>=len1)
			{
				flag=0;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
}


