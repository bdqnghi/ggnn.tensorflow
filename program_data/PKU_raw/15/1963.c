

int main()
{
  int n,h[100],w=0,q;int a[100][100];
  cin>>n;
  for(int i=1;i<=n;i++)
   {h[i]=0;for(int j=1;j<=n;j++)
   {
       cin>>a[i][j];
       if(a[i][j]==0)
       h[i]++;
   }}
   for(int i=1;i<=n;i++)
   { if(h[i]!=0)
   { q=h[i];break;}}
   for(int i=1;i<=n;i++)
   {
       if(h[i]!=0)
      {w++;}else continue;
   }


   int m=(q-2)*(w-2);
   cout<<m;
}