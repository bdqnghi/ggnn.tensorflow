


int main()
{   void jiafa(char a[] ,char b[] ,int c[]);
	char a[300],b[300];
	cin>>a>>b;
	int jieguo[300];
	memset(jieguo,0,sizeof(jieguo));
	jiafa(a,b,jieguo);
	int i=296;
	while(jieguo[i]==0&&i>0)
		i--;
	if(i==0)
		cout<<jieguo[0];
	else
		for( ;i>=0;i--)
			cout<<jieguo[i];
}

void jiafa(char a[],char b[],int c[])
{
	const int len=300;
	int an[len],bn[len];
	memset(an,0,sizeof(an));
	memset(bn,0,sizeof(bn));
	int lena=strlen(a);
	int lenb=strlen(b);
	int i=0;
	int j=0;
	for(i=lena-1;i>=0;i--)
		an[j++]=a[i]-'0';
	j=0;
	for(i=lenb-1;i>=0;i--)
		bn[j++]=b[i]-'0';
	for(i=0;i<len;i++)
	{
		an[i]+=bn[i];
		if(an[i]>9)
		{
			an[i]-=10;
			an[i+1]++;
		}
		c[i]=an[i];
	}
}