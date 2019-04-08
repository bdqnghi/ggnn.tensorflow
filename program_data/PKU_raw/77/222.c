char a[10000];
int use[10000]={0};
void f(int len)
{
	int i,j;
	for(i=0;i<len;i++)
		if(a[i]==a[len-1]&&use[i]==0)
		{
			for(j=i-1;j>=0;j--)
				if(a[j]==a[0]&&use[j]==0)
				{
					cout<<j<<" "<<i<<endl;
					use[i]=1;
					use[j]=1;
					break;
				}
		}
}
int main()
{
	int len;
	cin>>a;
	len=strlen(a);
	f(len);
	return 0;
}
			
			
	