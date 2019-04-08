void main()
{
	char string[300];
	int num[26]={0},i,j=0,len,flag=0;
	gets(string);
	len=strlen(string);
	for(j=0;j<len;j++)
		for(i=0;i<26;i++)
		if(string[j]==i+'a')
		{
			num[i]++;break;
		}
	for(i=0;i<26;i++)
		if(num[i]!=0)
		{
			printf("%c=%d\n",i+'a',num[i]);
			flag=1;
		}
	if(flag==0) printf("No");
}
