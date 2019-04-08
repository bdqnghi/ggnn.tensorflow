
char s[555];

int f(int i,int j)
{
	int k;
	if (j==2)
	{
		if (s[i]==s[i+1])
			return 1;
		else return 0;
	}
	else if (j==3)
	{
		if (s[i]==s[i+2])
			return 1;
		else return 0;
	}
	else 
	{
		for (k=0;k<=j/2-1;k++)
			if (s[i+k]!=s[i+j-1-k])
				break;
		if (k==j/2)
			return 1;
		else return 0;
	}
}

int main()
{
	int i,j,k,len;
	
	gets(s);
	len=strlen(s);
	for (i=len;i>0;i--)
		s[i]=s[i-1];
	s[0]=0;
	
	for (j=2;j<=len;j++)
		for (i=1;i<=len+1-j;i++)
			if (f(i,j)==1)
			{
				for (k=i;k<i+j-1;k++)
					printf("%c",s[k]);
				printf("%c\n",s[i+j-1]);
			}
			
			return 0;
}