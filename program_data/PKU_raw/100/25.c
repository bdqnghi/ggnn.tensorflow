void main()
{
	char s[300];int n[26]={0};int c;
	int i,j,flag=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			c=s[i]-97;
			n[c]++;
		}
	}
	for(j=0;j<26;j++)
	{
		if(n[j]!=0)
		{
			printf("%c=%d\n",j+97,n[j]);
			flag=1;
		}
	}
	if(flag==0)
		printf("No");
}

