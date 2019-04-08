int main()
{
    int n;
    cin>>n;
    int i,j,k,t;
	int m,s;
	for(i=6;i<=n;i=i+2)
	{
		  for(k=2;k<=i;k++)
		  {
			    m = (int) sqrt(k);				
		        
				for (j=2 ; j<=m ; j++)			
				{
			          if( k%j == 0 )				   
			          break;
				}
		        if(j==m+1)				//??k???
				{
                      s = (int) sqrt(i-k);
					  for(t=2;t<=s;t++)
					  {
						    if((i-k)%t==0)
							break;
					  }
					  if(t==s+1)		//??n-k????
					  {
						  cout<<i<<"="<<k<<"+"<<i-k<<endl;
						  goto end;
					  }

				}
		  }
          end:;
	}


    return 0;
}