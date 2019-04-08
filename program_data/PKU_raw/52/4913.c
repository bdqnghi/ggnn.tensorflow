int main()
{int a[200];
 int n,m,i;
 cin>>n>>m;
 for(i=0;i<n;i++)
	 cin>>a[i];
 for(i=n-1;i>=0;i--)
	 a[i+m]=a[i];
 for(i=n+m-1;i>n-1;i--)
	 a[i-n]=a[i];
 cout<<a[0];
 for(i=1;i<n;i++)
	 cout<<' '<<a[i];
  return 0;
}