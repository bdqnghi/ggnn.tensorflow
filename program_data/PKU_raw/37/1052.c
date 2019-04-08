char yici(char s[])
{
	int i,j,temp=0,time=0;
	char a;
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			if(s[i]==s[j])
				temp++;
		}
		if(temp==1)
		{
			a=s[i];
			time=1;
			break;
			
		}
		
		
		else temp=0;
			
		
		
	}
	if(time==1)
		return(a);
	else
		return('0');
}
void main()
{
	char s[100000];
	int n,i,j,temp=0,k;
	scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		gets(s);
		if(yici(s)=='0')
		{printf("no\n");}
		else
			printf("%c\n",yici(s));
	}
	
}