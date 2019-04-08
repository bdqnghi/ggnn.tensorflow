int main()
{int n,i,j;
 cin>>n;
 for(i=1;i<=n;i++)
 {int m,a[10]={0},flag=1;
  cin>>m;
  for(j=0;j<m;j++)
     cin>>a[j];
  for(j=0;j<m&&flag;j++)
   if((60-3*j-a[j])<=3)
      flag=0;
  if(!flag)
	if((60-3*(j-1)-a[j-1])>=0)
	  cout<<a[j-1]<<endl;
    else cout<<(60-3*(j-1))<<endl;
  else cout<<(60-3*m)<<endl;
 }
 return 0;
}
