int main()
{
	char s1[251],s2[251];
	int  a1[251]={0},a2[251]={0},len1,len2,len,t[251]={0},i;
	scanf("%s%s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1>len2)len=len1;
	else len=len2;
	for(i=0;i<len1;i++)
	a1[i]=s1[len1-1-i]-'0';
	for(i=0;i<len2;i++)
	a2[i]=s2[len2-1-i]-'0';
	for(i=0;i<len;i++)
	{
		t[i]+=a1[i]+a2[i];
		if(t[i]>=10)
		{
			t[i]-=10;
			t[i+1]++;
		}
	}
	if(t[len]!=0)len++;
	for(i=len-1;i>0;i--)
	{
		if(t[i]==0)len--;
		else break;
	}
	for(i=len-1;i>=0;i--)
	printf("%d",t[i]);
	return 0;
}
		
