	int main()
	{
		char string[257]={0},substring[257]={0},replacement[257]={0};
	char temp[257]={0},string_1[257]={0},string_2[257]={0};
	int i,j,k,word=0;
	int len1=0,len2=0,len3=0;
	gets(string);
	gets(substring);
	gets(replacement);
	len1=strlen(string);
	len2=strlen(substring);
	for(i=0;i<=len1-len2;i++)
	{
		for(j=i,k=0;j<i+len2,k<len2;j++,k++)
		{
			temp[k]=string[j];
		}
		if(strcmp(temp,substring)==0)
		{
			word=1;
			len3=i;
			break;
		}
	}
	for(i=0;i<len3;i++)
	{
		string_1[i]=string[i];
	}
	if(word==1)
	{
		printf("%s",string_1);
		printf("%s",replacement);
		if((len2+len3)<len1)
		{
			k=0;
			for(i=len3+len2;i<len1;i++)
			{
				string_2[k]=string[i];
				k++;
			}
			printf("%s",string_2);
		}
	}
	if(word==0)
	{
		printf("%s",string);
	}
	return 0;
}
