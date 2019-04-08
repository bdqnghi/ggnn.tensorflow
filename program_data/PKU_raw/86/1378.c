int main()
{
    int n,a[20],t,i;
    cin >> n;
	while ( n -- )
	{
		cin>>a[0];
		for ( i = 1 ; i <= a[0] ; i ++ )
		cin>>a[i];
		t = 1;
		 while ( ( a[0] + 1 - t ) * 3 + a[a[0] - t + 1] > 63 )
             t++;
          if ( ( a[0] + 1 - t ) * 3 + a[a[0] - t + 1] >= 60 ) 
                cout<<a[a[0]-t + 1]<<endl;
          else  
			  cout<<(60 - (a[0]-t+1) * 3)<<endl;
	}
	return 0;
}