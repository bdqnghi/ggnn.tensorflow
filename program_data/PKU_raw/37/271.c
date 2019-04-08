//*************************************************************
//*           ??????????????                    *
//*                  ?????1000010573                     *
//*                  ?????2010?11?                     *         
//*************************************************************


int main( )
{
	int t = 0 ;
	cin>>t;
		cin.get();
	for(int r = 0 ; r<t+1 ;r++) 
	{
	
		char str[111] ;//??????
	    int count[30] = {0};//????????????? 
	    int L , c ;
	    char z ;
	    cin.getline(str,111);//??????
	    //?????????????count?? 
	    L = strlen(str);//???????????? 
	    for(int i = 0 ; i<L ; i++)
    	{
			c = str[i] - 'a' ;
			count[c]++;
    	} 
	    for(int j = 0 ; j < L ; j++)
	    {
		    if(count[str[j]-'a']==1)
		    {
			    z = str[j] ;
			    cout<<z<<endl;
			    break;
		    }
		    if(j==L-1)
		    {
			    cout<<"no"<<endl;
			    break;
		    }
	    }
		
	}
	return 0; 
}
	
