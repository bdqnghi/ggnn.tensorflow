int main()
{
	char s[100],a[100];
	int flag[100]={0};
	int i=0,j=0,flag1=0;
	cin>>s;
	cin.get();
	cin>>a;
	int n=strlen(s),m=strlen(a);
	if(n!=m) {cout<<"NO"<<endl;return 0;}
	else
	{
		for(i=0;i<n;i++)
		{
            int flag2=0;			
			for(j=0;j<n;j++)
			{
				if(flag[j]!=0) continue;
				else if(s[i]==a[j]) {flag[j]=1,flag2=1;break;}
			}
			if(flag2==0) flag1=1;
		}
		if(flag1==1) {cout<<"NO"<<endl;return 0;}
		else  cout<<"YES"<<endl;
	}
	return 0;
}