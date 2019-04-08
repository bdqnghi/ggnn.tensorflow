const int len=300;
char a[len],b[len];
int an[len],bn[len];

int main()
{
	cin>>a>>b;	
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
	for(i=0;i<210;i++)
	{
		an[i]+=bn[i];
		if(an[i]>9)
		{
			an[i]-=10;
			an[i+1]++;
		}
	}
	i=len-3;
	while(an[i]==0&&i>0)
		i--;
	if(i==0)
		cout<<an[0];
	else
		for( ;i>=0;i--)
			cout<<an[i];
}
