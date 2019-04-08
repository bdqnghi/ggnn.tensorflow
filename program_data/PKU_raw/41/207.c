int main()
{
   int a[6],flag[6],i,count;                                               //a??????,flag ?????????          
   
  for(a[5]=4;a[5]<=5;a[5]++)
  {
      for(a[1]=1;a[1]<=5;a[1]++)
	  {
	      if(a[1]==a[5])continue;
		  else
		  {
              for(a[3]=1;a[3]<=5;a[3]++)
			  {
			       if(a[3]==a[5]||a[3]==a[1])continue;
				   else
				   {
				        for(a[4]=1;a[4]<=5;a[4]++)
						{
						     if(a[4]==a[3]||a[4]==a[5]||a[4]==a[1])continue;
							 else
							 {
							      a[2]=15-a[1]-a[5]-a[3]-a[4];
								  flag[1]=2-a[5];
                                   flag[2]=3-a[2];
                                 flag[3]=6-a[1];
                                   flag[4]=(a[3]>1);
                                  flag[5]=2-a[4];
								  count=1;                                       //count????????
								  for(i=1;i<=5;i++)
								  {
									  if(a[i]==1||a[i]==2)
									  {
									     if(flag[i]!=1)
											 count=0;
										 
									  }
									  else
									  {
									      if(flag[i]==1)
											  count=0;
									  }
                                  }
								  if(count==1)
								  {
									  for(i=1;i<=4;i++)
	                                    cout<<a[i]<<' ';
									  cout<<a[5];
								  }
								  
							 }
						}
				   }
			  }
		  }
	  }
  }
  a[5]=1;
  for(a[1]=2;a[1]<=5;a[1]++)
	  {
              for(a[3]=2;a[3]<=5;a[3]++)
			  {
			       if(a[3]==a[1])continue;
				   else
				   {
				        for(a[4]=2;a[4]<=5;a[4]++)
						{
						     if(a[4]==a[3]||a[4]==a[1])continue;
							 else
							 {
							      a[2]=15-a[1]-a[5]-a[3]-a[4];
								  flag[1]=2-a[5];

   flag[2]=3-a[2];
   flag[3]=6-a[1];
   flag[4]=(a[3]>1);
   flag[5]=2-a[4];
								  count=1;
								  for(i=1;i<=5;i++)
								  {
									  if(a[i]==1||a[i]==2)
									  {
									     if(flag[i]!=1)
											 count=0;
										 
									  }
									  else
									  {
									      if(flag[i]==1)
											  count=0;
									  }
                                  }
								  if(count==1)
								  {
									  for(i=1;i<=4;i++)
	                                    cout<<a[i]<<' ';
									  cout<<a[5];
								  }
							 }
						}
				   }
			  }
		  
	  
  }
  
  return 0;
}