
int main()
{
	int i,j,k,b;
	int m[10000]={0};
	int n;
	cin>>n;
	if(n==0)
		cout<<1;
    if(n==1)
		cout<<2;
	if(n>1){
		m[0]=2;
for(i=1;i<=n-1;i++)
	{for(j=0;j<9999;j++)
	  m[j]=m[j]*2;
	for(j=0;j<9999;j++)
		if(m[j]>9)
		{
			m[j]=m[j]%10;
			m[j+1]++;
		}


	}
for(i=9999;i>=0;i--)
	if(m[i]!=0)
		{k=i;break;}
for(b=k;b>=0;b--)
		cout<<m[b];}
 return 0;
}


