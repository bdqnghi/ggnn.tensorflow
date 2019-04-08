void main()
{
	char str1[300],str2[300];
	int i,len1,len2,flag=0;
	void rank(char str[300]);
	scanf("%s %s",str1,str2);
	rank(str1);
	rank(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2)
		printf("NO\n");
	else
	{
		for(i=0;i<len1;i++)
			if(str1[i]!=str2[i])
			{
				flag++;
				break;
			}
	
	if(flag==0)
		printf("YES\n");
	else
		printf("NO\n");
	}
}
void rank(char str[300])
{
	char t;
	int i,j,len;
	len=strlen(str);
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
			if(str[i]<str[j])
			{
				t=str[i];
				str[i]=str[j];
				str[j]=t;
			}
}
	
