int n,m,s=0;
void put (int p,int j,int m)
{if ((p==n)&&(m==0))s++;
 else if (p!=n)
 {
  for (int i=j;i<=m;i++)if (m-i>=0)put(p+1,i,m-i);
 }

}
int main()
{int t;
cin>>t;
for (int i=1;i<=t;i++)
 {
  cin>>m>>n;s=0;
  if (n>m)n=m;
  for (int j=0;j<=m;j++) put(1,j,m-j);
  cout<<s<<endl;
 }
return 0;
}
