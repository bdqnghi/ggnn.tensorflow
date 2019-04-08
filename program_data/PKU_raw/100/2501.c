
void main()
{
	char s[301];
	int len,num[52]={0},i,flag=0;

	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>=65&&s[i]<=90)
			num[s[i]-65]++;
		else if(s[i]>=97&&s[i]<=122)
			num[s[i]-97+26]++;
	}

	for(i=0;i<52;i++){
		if(num[i]!=0){
			flag=1;
			if(i<26)
				printf("%c=%d\n",i+65,num[i]);
			else
				printf("%c=%d\n",i-26+97,num[i]);
		}
	}
	if(!flag)
		printf("No\n");
}
