int main()
{
	int N;
	scanf("%d",&N);
	while(N!=0)
	{
	int win=0,lose=0,count1=1,count2=1,j=0;
	int T[1000]={0};
	int Q[1000]={0};
	int temp;
	for(int i=0;i<N;i++)
		scanf("%d",&T[i]);	
	for(j=0;j<N;j++)
	    scanf("%d",&Q[j]);
	for (int i=0;i<N;i++)
	    {
		for(j=i+1;j<N;j++)
		    {
			if(T[i]<T[j])
			   {
			   temp=T[i];
			   T[i]=T[j];
			   T[j]=temp;		
			   }	
			if(Q[i]<Q[j])
			   {
				temp=Q[i];
				Q[i]=Q[j];
				Q[j]=temp;		
			   }
			}		
		}
	j=0;
    for(int i=0;i<=N-count1;i++)
        {
		    if(T[i]>Q[j])
			    {
				win++;	
				j++;	
				}	
			else
			   {
			    if(T[i]<Q[j])
				   {
				    i--;
					lose++;
					count1++;	
					j++;	
				   }
				else
				   {
				   if(T[N-count1]>Q[N-count2])
				      {
					   win++;
					   count1++;
					   count2++;
					   i--;		
					  }	
					else
					   {							
						if(T[N-count1]<Q[N-count2])
						   {
							lose++;
							count1++;
							i--;
							j++;									
							}
						else
						    {
							if(T[N-count1]==Q[j])
							    {
								count1++;
								j++;	
								i--;
								}		
							else
							   {
							    lose++;
								count1++;
								j++;
								i--;	
							   }	
							}	
					   }	
				   }		
			   }
		}
	printf("%d\n",200*(win-lose));	
	    scanf("%d",&N);
	}
}