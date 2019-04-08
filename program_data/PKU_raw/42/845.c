int main()
{
   int n,k;
   cin>>n;
   int a[100000];
   for(int i=0;i<n;i++)//???????
	   cin>>a[i];
   cin>>k;
   int t=0;
   for(int i=0;i<n-t;)
   {
      if(a[i]==k)
	  {
	      for(int j=i;j<n-t;j++)
			  a[j]=a[j+1];
		  t++;
	  }
	  else
		  i++;
   }
   for(int i=0;i<n-t-1;i++)
	   cout<<a[i]<<" ";
   cout<<a[n-t-1];
   return 0;
}