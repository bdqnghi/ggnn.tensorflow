int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		char a[101],b[101];
		cin>>a>>b;
		int c=strlen(a);
		int d=strlen(b);
		int e[100],f[100];
		int h=0,j=0;
		for(int g=c-1;g>=0;g--)
		{
			e[h]=a[g]-'0';
			h++;
		}//????????
		for(int g=d-1;g>=0;g--)
		{
			f[j]=b[g]-'0';
			j++;
		}
		for(int g=d;g<100;g++)
			f[g]=0;//?????????????????0
		int l[100]={0};
		for(int k=0;k<=c-1;k++)
		{
			if(e[k]>=f[k])
			{
				l[k]=e[k]-f[k];
			}
			else
			{
				l[k]=e[k]+10-f[k];
				e[k+1]=e[k+1]-1;//????????????????????????
			}
		}
		int t=99;
		while(l[t]==0)//?????????
			t--;
		for(;t>=0;t--)
			cout<<l[t];
		cout<<endl;
	}
	
	
	return 0;
	
	
}
