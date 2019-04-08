int a=0,s=0;
void find(int n,int prim)
 {
  if (n==a){s++;}
  else
   {
    for (int i=prim;i<=a/n;i++)
     if ((a%(n*i)==0)){find(n*i,i);}
   }
 }
int main()
{int n=0;cin>>n;
for (int i=1;i<=n;i++)
 {
  cin>>a;s=0;
  for (int i=2;i<=a;i++)
   {
    if (a%i==0) {find(i,i);}
   }
   cout<<s<<endl;
 }
return 0;
}
