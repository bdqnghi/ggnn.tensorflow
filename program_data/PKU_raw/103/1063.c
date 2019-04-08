int main()
{
	int i,m,j;
	int b[2000]={0};
	int c[2000]={0};
	char a[2000];
	char s[2000];
	gets(s);
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if((s[i]>='a')&&(s[i]<='z'))
		s[i]=s[i]-('a'-'A');
	}
	for(i=0;i<m;i++)
	{
		if(s[i]==s[i+1])
		c[i]=1;	
	}
	for(i=0,j=0;i<m;i++)
	{
		if(c[i]==0)
		{
			j++;
			b[j]=i+1;
			a[j]=s[i];
		}
	}
	for(j=0;j<2000;j++)
	{
		if(b[j]!=0)
		printf("(%c,%d)",a[j],b[j]-b[j-1]);
	}
} 