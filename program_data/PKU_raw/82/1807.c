int main()
{
 int n;
 cin>>n;
 int max=0;
 int t=0;
 int a,b;
 for(int i=1;i<=n;i++)
 {
  cin>>a>>b;
  if(a>=90&&a<=140&&b>=60&&b<=90)
   t++;
  else if(t!=0)
   {max=t>max?t:max;t=0;}
  max=t>max?t:max;
 }
 cout<<max;
 return 0;
}