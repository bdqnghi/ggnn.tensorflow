int main()
{
	int n,s=0,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(i%7!=0)
	     {
			 if(i%10!=7)
			 {
				 if(i/10!=7)
				 {
					 s=s+i*i;
				 }
			 }
	     }
	}
	cout<<s;
	return 0;
}