int main()
{
	int n,a,b,i,h[100];
	h[0]=0;
	cin>>n;
 for(i=1;i<=n;i++)
 {
  cin>>a>>b;
  if(a>=90&&a<=140&&b>=60&&b<=90)
   h[i]=h[i-1]+1;
  else
	  h[i]=0;
 }
 for(i=2;i<=n;i++)
 {
  if(h[i]<=h[i-1])
	  h[i]=h[i-1];
 }
 cout<<h[n]<<endl;
 return 0;
}