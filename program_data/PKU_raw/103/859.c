int main()
{
	char s[1000]={" "};
	int n,i=0,j,p=1;
	gets(s);
	n=strlen(s);
	while(i<n)
	{
		if(s[i+1]==s[i]||s[i+1]==s[i]-32||s[i+1]==s[i]+32)
		{
			p++;
			i++;
		}
		else
		{
			if(s[i]>='a'&&s[i]<='z')
				s[i]=s[i]-32;
			
			
			printf("(%c,%d)",s[i],p);
			i++;
			p=1;
		}
	}return 0;
}


