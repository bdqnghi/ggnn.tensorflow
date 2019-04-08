int  main()
{
	int a[100]={0};  
    int i;
	int n,k;//????n ?????? k
	cin>>n>>k;
    do
    {
        a[n+1]=a[n+1]+1;   //a[n+1]?????????????
		a[n]=a[n+1]*n+k;
        for (i=n-1; i>=1; i--)
        {
    	if ( a[i+1]%(n-1)!=0 )
		  break;	   
	    else
		  a[i]=a[i+1]*n/(n-1)+k;
        }
    } while( i>=1); 

	cout <<a[1] << endl;

    return 0;
}