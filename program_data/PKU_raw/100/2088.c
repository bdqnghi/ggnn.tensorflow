int main()
{
	char s[100];
	int a[52]={0},count=0,len,i,j;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		for(j=0;j<26;j++)
		{
			if(s[i]==j+'A')
			{
				a[j]+=1;
                count+=1;
			}
		}
		for(j=0;j<26;j++)
		{
			if(s[i]==j+'a')
			{
				a[26+j]+=1;
				count+=1;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		printf("%c=%d\n",'A'+i,a[i]);
	}
	for(i=0;i<26;i++)
	{
		if(a[i+26]!=0)
		printf("%c=%d\n",'a'+i,a[i+26]);
	}
	if(count==0)
		printf("No");
	return 0;
}



