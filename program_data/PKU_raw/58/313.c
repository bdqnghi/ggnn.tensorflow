int main()
{
    char sen[200][90];
	int  i,n,p,j,len,q;
	cin>>n;
	cin.ignore();
	for(i=1;i<=n;i++)
	{
		cin.getline(sen[i],90);
		
	    
	
	}
	
	
	  for(i=1;i<=n;i++)
	  {
		 q=0;
		 p=0;
		 len=strlen(sen[i]);
		 if(len==1)
		 {
		   if(sen[i][0]=='_'||(sen[i][0]>='a'&&sen[i][0]<='z')||(sen[i][0]>='A'&&sen[i][0]<='Z'))
		   {
			   cout<<1<<endl;continue;
		   }
           
		 }   
	    else
		   {
          
		        for(j=1;j<=len-1;j++)
				{
			      
			      if(sen[i][0]=='_'||(sen[i][0]>='a'&&sen[i][0]<='z')||(sen[i][0]>='A'&&sen[i][0]<='Z'))
				  {
				      p=1;
				  }
			       if((sen[i][j]>='a'&&sen[i][0]<='z')||(sen[i][j]>='A'&&sen[i][j]<='Z')||(sen[i][j]>='0'&&sen[i][j]<='9')||(sen[i][j]=='_'))
				   {
				      q=1;
				   }
		    	   else
				   {
				      q=0;break;
				   }
            
				}
		 
		     
		       if(p==1&&q==1)
			   {
			       cout<<1<<endl;
			   }
		       else
			   {
			    cout<<0<<endl;
			   }
		   }
	

	  }
    
    return 0;

}
					
					
					
					
					
					
					
					



          
	




	
		
		
		
		
