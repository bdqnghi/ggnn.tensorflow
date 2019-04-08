
int main()
{
 int i,j,n,a[100],m,time;
 cin>>n;
 for(i=0;i<n;i++)
 {
    cin>>m;
    if(m==0)
	    cout<<60;
    else 
	 {
	  for(j=0;j<m;j++)              
       {
	    cin>>a[j];
	    
	   }
	 for(j=0;j<m;j++)  
	   {
		  time=3*j+a[j];
		  if(time+3>=60)
	      {  
		   if(time<=60)
		     {
			  cout<<a[j];break;   //??break?????????
		     }
		   time=3*(j-1)+a[j-1];
	       
		   
		   break;
		  }
	   }
	   if(time+3<60)
	   cout<<60-3-time+a[j-1];
    }
   cout<<endl;
 
 }
 
 return 0;
}
