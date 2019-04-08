int main()
{
	char s[100];
	int n,j,i,sum=1;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		
		if(s[i]>='A'&&s[i]<='Z')
		{
			if(s[i+1]==s[i]||s[i+1]==s[i]+32)
			{
				sum++;
			continue;
			}
			else {
				printf("(%c,%d)",s[i],sum);
			     sum=1;
				 continue;
			     }
		}
		else if(s[i]>='a'&&s[i]<='z')
		{

       if(s[i+1]==s[i]||s[i+1]==s[i]-32)
			{
				sum++;
			continue;
			}
			else {
				printf("(%c,%d)",s[i]-32,sum);
			     sum=1;
				 continue;
			     }
		}
	}
		return 0;
}
	




