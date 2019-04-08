int main()
{
	char s[1005];
	int i=0,j,k=1;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]-'a'>=0&&s[i]-'z'<=0)
		s[i]=s[i]-'a'+'A';
		i++;
	}
	i=0;                           //i?????????? 
	while(s[i]!='\0')
	{
		if((s[i])!=(s[i+1]))
		{
			printf("(%c,%d)",s[i],k);
			k=1;
		}
		else k++;
		i++;
	}
} 