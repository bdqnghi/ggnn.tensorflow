void cheng (char *a)
{
	int t,w[100]={0},i,k,j=0,s=0;
	t=strlen(a);
	for(i=t-1;i>=0;i--)
	{
		w[j]=a[i]-'0';
		w[j]=2*w[j];
		j++;
	}

	
	for(i=0;i<=t-1;i++)
	{
		w[i+1]=w[i]/10+w[i+1];
		w[i]=w[i]%10;
	}
j=90;
while(w[j]==0)j--;

for(i=j;i>=0;i--)
	{
		a[s]=w[i]+'0';
		s++;
	}
}
int main()
{

	int n,i,s;
	char a[100]={'1'};
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cheng(a);
	}
	s=strlen(a);
for(i=0;i<=s-1;i++)
	{
		cout<<a[i];
	}
	return 0;
}

