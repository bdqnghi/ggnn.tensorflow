
int main()
{   
	int s[6];
	int p[6];
	int i,j;
	int l,m;
	int flag=0;
    
	
    for(p[1]=1;p[1]<=5;p[1]++)
			for(p[2]=1;p[2]<=5;p[2]++)
				for(p[3]=1;p[3]<=5;p[3]++)
					for(p[4]=1;p[4]<=5;p[4]++)
                         for(p[5]=1;p[5]<=5;p[5]++)
					     {   
						   if((p[5]!=2)&&(p[5]!=3))
						    { 
								flag=0;
						      for(l=1;l<5;l++)
						     {
							    for(m=l+1;m<=5;m++)
							  {    
								   if(p[l]==p[m])
								   {
									   flag=1;
									   break;
						           }
							  }
								if(flag==1)
									break;
						     }
						       if(flag==1)
									continue;
								for(i=1;i<=5;i++)
							        for(j=1;j<=5;j++)
								        if(j!=i)
								          {
									         if((p[i]==1)&&(p[j]==2))
											 {s[1]=(p[5]==1);
	                                         s[2]=(p[2]==2);
	                                         s[3]=(p[1]==5);
	                                         s[4]=(p[3]!=1);
											 s[5]=(p[4]==1);
											 if((s[i]==1)&&(s[j]==1)&&(s[1]+s[2]+s[3]+s[4]+s[5]==2))
										         cout<<p[1]<<' '<<p[2]<<' '<<p[3]<<' '<<p[4]<<' '<<p[5]<<endl;}
									        
											
										   }
						}
					}




	
	return 0;
}

