int main()
{
     int n,i;
	 cin>>n;
	 if(n==0)
		 cout<<0;
	 else
	 {
	 for(i=0;i<=5;i++)
	 {
		 if(n/pow(10.0,i*1.0)<1)
			 break;
	 }
     for(int j=1;j<=i;j++)
	 {
		 int k=n%10;
		 cout<<k;
		 n=(n-k)/10;
	 }
	 cout<<endl;
	 }
	 return 0;
}