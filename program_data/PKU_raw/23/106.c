void main()
{
	char s[100];
	char str[100][100];
	int i,j=0,k=0,l,n=0,p,q;
	char c;
	for(p=0;p<100;p++)
	{
		for(q=0;q<100;q++)
			str[p][q]='\0';
	}
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((c=s[i])!=' ')
		{
			if((c=s[i+1])==' '||(c=s[i+1])=='\0')n++;
		}
	}
	for(i=0,j=0;i<l;i++)
	{
		if((c=s[i])!=' ')
		{
			str[j][k]=s[i];
			k++;
		}
		else
		{
			j++;
			k=0;
		}
	}
	for(j=0;j<n-1;j++)printf("%s ",str[n-1-j]);
	printf("%s",str[0]);
}