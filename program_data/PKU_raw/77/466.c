int main()
{
	char s[101];
	int i,a[100],c,j;
	scanf("%s",s);
	i=c=0;
	while(s[i]!='\0')
	{
		if(s[i]!=s[0])a[c++]=i;
		i++;
	}
	for(i=0;i<c;i++)
	{
		for(j=a[i];j>=0;j--)
		{
			if(s[j]==s[0])
			{
				s[j]=' ';
				printf("%d %d\n",j,a[i]);
				break;
			}
		}
	}
		return 0;
}
	
