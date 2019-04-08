
int main()
{
 int n,i,num[100],result[100];
 cin>>n;
 for (i=0;i<n;i++)
 {
  cin>>num[i];
 }
 for (i=0;i<n;i++)
 {
  result[n-1-i]=num[i];
 }
 for (i=0;i<n-1;i++)
 {
  cout<<result[i]<<" ";
 }
 cout<<result[i]<<endl;
 return 0;
}