int main()
{
	char sz1[256];
	char sz2[256];
	char sz3[256];
	scanf("%s",sz1);
	scanf("%s",sz2);
	scanf("%s",sz3);
	int len1,len2;
	len1=strlen(sz1);
	len2=strlen(sz2);
	int i,k;
	int flag=0;
	for (k=0;k<=len1-len2;k++)
	{
		for (i=0;i<len2;i++)
		{
			if (sz1[i+k]==sz2[i])
			{
                   flag=flag+1;

			}
			
		}
		if (flag==len2)
		break;
		if (flag!=len2)
			flag=0;
	}
	if (flag==len2)
	{
		for (i=0;i<len2;i++)
		{
			sz1[k+i]=sz3[i];
		}
		
	}
	printf("%s",sz1);
	return 0;
}