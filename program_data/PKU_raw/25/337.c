int ans[100]={0};
void multi(int a[])
{
	int i,l,aa[100]={0};
	for (i=99;i>=0;i--) if (a[i]!=0)
	{
		l=i+1;
		break;
	}
	for (i=0;i<l;i++)
	{
		aa[i]+=a[i]*2;
		aa[i+1]+=aa[i]/10;
		aa[i]=aa[i]%10;
	}
	for (i=0;i<100;i++) ans[i]=aa[i];
}
int main()
{
	int n,i,l;
	cin>>n;
	ans[0]=1;
	for (i=0;i<n;i++)
		multi(ans);
	for (i=99;i>=0;i--) if (ans[i]!=0)
	{
		l=i+1;
		break;
	}
	for (i=l-1;i>=0;i--) cout<<ans[i];
	cout<<endl;
	return 0;
}
