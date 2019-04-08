int main()
{
    int a[5][5];
    int b[5];
    int c[5];
    int i,j;
    int f = 0;
    for(i=0; i<5; i++)
    {
 		 for(j=0; j<5; j++)
 		 {
		      cin>>a[i][j];
		      if(i == 0)
		      {
			   	   b[j] = a[i][j];
	          }
	          if(j == 0)
	          {
			   	   c[i] = a[i][j];
	          }
	          if(a[i][j] < b[j])
	          {
	   			  b[j] = a[i][j];
			  }
			  if(a[i][j] > c[i])
			  {
			      c[i] = a[i][j];
			  }  			 
         }
    }
    for(i=0; i<5; i++)
    {
 		 for(j=0; j<5; j++)
 		 {
		      if(b[j] == c[i])
		      {
	   		       cout<<i+1<<" "<<j+1<<" "<<b[j]<<endl;
	   		       f = 1;
	   		  }
		 }
    }
    if(f == 0)
    {
	 	 cout<<"not found"<<endl;
    }
    return 0;
}
