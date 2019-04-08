int main()
{
 int n,i;
 cin>>n;
 int a[100000];
 for(i=0;i<n;i++)
   cin>>a[i];
 int k,j=0;
 cin>>k;
 for(i=0;i<n-j;)
  {if(a[i]==k)
    {for(int t=i;t<n-j-1;t++)
       a[t]=a[t+1];
     j++;}
   else
    i++;}
 for(i=0;i<n-j-1;i++)
   cout<<a[i]<<" ";
 cout<<a[n-j-1]<<endl;
 return 0;
}
