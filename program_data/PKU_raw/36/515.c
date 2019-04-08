void order(char ch[],int len)
{
	int i;
	char temp;
	if(len==1);
	else
	{
		for(i=0;i<len-1;i++)
		{
			if(ch[i]>ch[i+1])
			{
				temp=ch[i];
				ch[i]=ch[i+1];
				ch[i+1]=temp;
			}
		}
		order(ch,len-1);
	}
}
int main()
{
	char ch1[100],ch2[100];
	int len1,len2;
	scanf("%s %s",ch1,ch2);
	len1=strlen(ch1);
	len2=strlen(ch2);
	if(len1!=len2)printf("NO\n");
	else
	{
		order(ch1,len1);
		order(ch2,len1);
		if(strcmp(ch1,ch2)==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}