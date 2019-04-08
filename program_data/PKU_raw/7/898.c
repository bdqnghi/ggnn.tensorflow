int main()
{
	char str[501],subs[501],rep[501];
	int i,j,k,len,len1;
	scanf("%s%s%s",str,subs,rep);
	i=0;
	len=strlen(str);
	while(str[i]!='\0')
	{
		if(str[i]==subs[0])
		{
			len1=strlen(subs);
			for(j=0;j<len1;j++)
			if(str[i+j]!=subs[j])break;
			if(j==len1)
			{
				for(k=0;k<i;k++)
				printf("%c",str[k]);
				printf("%s",rep);
				for(k=i+len1;k<len;k++)
				printf("%c",str[k]);
				break;
			}
		}
		i++;
	}
	if(str[i]=='\0')
	printf("%s",str);
	return 0;
}
	
