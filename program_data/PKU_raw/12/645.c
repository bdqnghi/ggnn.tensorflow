

int main()
{
	int b[20]={0};
	int p=2 ;
	int j=1 , k=2 , num=0 ;
	
    while( cin>>b[1] )
	{    
	



	     if ( b[1] != -1 )
		{
		  for( p=2; ;p++)
		  {
		     cin>>b[p];
			 if ( b[p] != 0 ) continue;
			 else 
			 {
				
				for ( j=1;j<p-1;j++)
				{
	              for (k=j+1;k<=p-1;k++)
				  {
		        	if (( b[j]==b[k]*2 )||( b[k]==b[j]*2 ))
					{
			        	num++;
			        	
					}
				  }
				}
                cout << num << endl;
				num=0;
				memset(b,sizeof(b),0);
				break;
			 }
		  }
			
		 }
		 else break;
		 
		
	}

	return 0;
}

	




