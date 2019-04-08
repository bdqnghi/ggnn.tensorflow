int a[100001];
int main()
{int n,samenum=0,t,d;
cin>>n;
for(int i=0;i<n;i++)
	cin>>a[i];
cin>>d;
for(int i=0;i<n;i++)
	{if(a[i]==d)
	  {samenum++;t=i;
	  do {a[t]=a[t+1];
          t++;}while(t<n);i--;
       }}
for(int j=0;j<n-samenum;j++)
{if(j<n-samenum-1) cout<<a[j]<<' ';
else cout<<a[j];
}
return 0;

}