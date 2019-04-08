int main()
{
	int k,m,n,i,a[100];                //????
	m=0;n=0;
	cin>>k;                            //????
	for(i=0;i<k;i++)                   //??k?
	{
	   cin>>a[i];
	   if(a[i]>m)                     
		   {n=m;
	        m=a[i];}
	   else if(a[i]>n)
		    n=a[i];
	}
    cout<<m<<endl;
	cout<<n<<endl;
	return 0;
}