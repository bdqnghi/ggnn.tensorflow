int main()
{
 int n=0,b=0,m=0;
 cin>>n;
 int a[n];
 for (int p=0;p<n;++p)
 {
	 cin>>a[p];
}
 cin>>b;
 for (int ii=0;ii<n;++ii)
 {
 if(a[ii]==b)
 {
	 m++;
 }
 }
 for (int i=0;i<n;++i)
 {
	 if(a[i]==b)
	 {
		 for(int b=i;b<n;b++)
		 {
			 a[b]=a[b+1];
		 }
		 i--;
	 }
}
 for(int o=0;o<n-m-1;o++)
   cout<<a[o]<<" ";
 cout<<a[n-m-1];
 return 0;
 }