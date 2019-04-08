int a[1001];
int main()
{
	int n,i,s,m,j,p=0,s1,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
	    if(m==0)cout<<60<<endl;
	    else
	    {
			for(j=1;j<=101;j++)a[j]=0;
			for(j=1;j<=m;j++)
			cin>>a[j];
			for(j=1;j<=m;j++)
			if(a[j]+3*(j-1)>60)break;
			j--;
			s=a[j]+3*(j-1);
			s1=s+3;
			if(s1<=60)
			p=60-s1;
			else
			p=0;
			cout<<p+a[j]<<endl;
		}
	}
	return 0;
}
	