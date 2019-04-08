int main()
{
 int F(int);             //??????k????
 int n;                  //n????????
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  int k;
  cin>>k;
  cout<<F(k)<<endl;
 }
 return 0;
}
int F(int k)
{
if(k==1||k==2)
 return 1;
 int a=1,b=1,c;
 for(int i=3;i<=k;i++)
 {
  c=a+b;                     //??????????c?
  a=b;b=c;
 }
 return b;
}
