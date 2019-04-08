int main(void)
{
	int i,len,sumtimes=0,times[26];
	char str[300];
	gets(str);
	len=strlen(str);
	for (i=0;i<26;i++)
		times[i]=0;
	for (i=0;i<len;i++)
	{
		if (str[i]>=97&&str[i]<=122)
			times[str[i]-97]+=1;
	}
	for (i=0;i<26;i++)
	{
		if(times[i]!=0)
			printf("%c=%d\n",i+97,times[i]);
		sumtimes+=times[i];
	}
	if(sumtimes==0)
		printf("No");
}
