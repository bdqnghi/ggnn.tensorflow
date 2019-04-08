int main ()
{
	int n ;
	cin >> n ;
	int bfnq [n];
    int i , j ;
    for (i=0;i<n;i++)
    	cin >> bfnq [i];//??


    int a1=1 , a2=1 ;
    for (i=0; i<n; i++)//n?????
    {	a1=1;
    	a2=1;
    	if(bfnq[i]==1||bfnq[i]==2)
    		cout <<"1"<<endl;
    	else if(bfnq[i]%2==1)
    		   {
    			for (j=3; j<=bfnq[i]; j+=2)

    			   	 {
    			   	  a1=a1+a2;
    			   	  a2=a1+a2;
    			   	 }
    		   	 cout << a1<<endl ;
    		   }
    	else
    	{
    		for(j=3; j<=bfnq[i]; j+=2)
    		{
    			a1=a1+a2;
    			a2=a1+a2;
    		}
    		cout << a2 << endl ;
    	}
    }

    return 0;
}
