int main()
{
	int a,b,c;
	int e = 1;
	int d = 1;
	int p = 0;
	for( a=1;a<=5;a ++  )
	 {
			if(a==e)
			{ continue; }
	    for( b = 1;b<= 5;b ++)
	    {    if(b == a||b==2||b==1)
	        {  continue  ;    }
	       for(c = 1; c<= 5;c++)
	      {    
			if(c ==a||c==2||c==1||c==b)
	         {  continue;       }
	          if(a!=5&&b!=2&&e!=1)
			  {p ++; 
			     if(p==0)
             {
               cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
				
				}
			}  
		  }  
	
	    }
     }
    e = 4;
    for( a=1;a<=5;a ++  )
	 {
			if(a==e)
			{ continue; }
	    for( b = 1;b<= 5;b ++)
	    {    if(b == a||b==e)
	        {  continue  ;    }
	       for(c = 1; c<= 5;c++)
	      {    
			if(c ==a||c==e||c==b)
	         {  continue;       }
             for(d=1;d<=5;d++)
			{ 
			 if(d==a||d==b||d==c||d==e)
			  {       continue;}
			  
			  if(d==2&&e==3&&c==1)
            {  
				if(a==5&&b!=2&&c!=1)
			  {	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
			   }
		    }
                 if(c==1&&b==2) 
            {
				 if(a==5&&c==1&&d==3)
			{cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;	
			}	
			}
		}
	}
       
	   }
     }
            
         return 0;
}   