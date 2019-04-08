
int main()
{
	int n,i,j;
	char s[100];
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		gets(s);
		for(j=0;s[j]!=0;j++)
		{
			if(s[j]=='e'&&s[j+1]=='r'&&s[j+2]==0)
				s[j]=s[j+1]=0;
			if(s[j]=='l'&&s[j+1]=='y'&&s[j+2]==0)
				s[j]=s[j+1]=0;
			if(s[j]=='i'&&s[j+1]=='n'&&s[j+2]=='g'&&s[j+3]==0)
				s[j]=s[j+1]=s[j+2]=0;
			
		}
		puts(s);
	}
	return 0;
}

