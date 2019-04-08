int main()
{
	int n,i,ucase[26]={0},lcase[26]={0},sum=0;
	char a[301],c;
	gets(a);
	for(i=0;(c=a[i])!=0;i++)
	{
		if(c>=65 && c<=90)
			ucase[c-65]=ucase[c-65]+1;
		else if(c>=97 && c<=122)
			lcase[c-97]=lcase[c-97]+1;
	}
	for(i=0;i<26;i++)
	{
		c=i+65;
		if(ucase[i]!=0)printf("%c=%d\n",c,ucase[i]);
		sum=sum+ucase[i];
	}
	for(i=0;i<26;i++)
	{
		c=i+97;
		if(lcase[i]!=0)printf("%c=%d\n",c,lcase[i]);
		sum=sum+lcase[i];
	}
	if(sum==0)printf("No\n");
	return 0;
}