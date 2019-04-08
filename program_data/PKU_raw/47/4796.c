
int main()
{
 int n,i,t,num[100];
 cin>>n;
 for (i=0;i<n;i++)
 {
  cin>>num[i];
 }
 for (i=0;i<(n+1)/2;i++)
 {
     t=num[n-1-i]; 
	 num[n-1-i]=num[i];
	 num[i]=t;
 }
 for (i=0;i<n-1;i++)
 {
  cout<<num[i]<<" ";
 }
 cout<<num[i]<<endl;
 return 0;
}