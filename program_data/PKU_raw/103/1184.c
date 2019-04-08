
void str(char s[])
{
    int i;
	for(i=0;s[i];i++)
	{
	    if(('a'<=s[i])&&(s[i]<='z'))
			s[i]=s[i]-'a'+'A';
	}
	return ;
}

int main()
{
    char s[1001];
	int i,j,n;

	scanf("%s",s);

	str(s);

	for(i=0;s[i];i=j)
	{
	
		    n=1;
	        for(j=i+1;s[j]==s[i];j++)
			{
		        n++;
			    s[j]='a';
			}
		    printf("(%c,%d)",s[i],n);
		
	}

	return 0;
}