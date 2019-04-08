

int main(int argc, char* argv[])
{
	int n;
    int t;
	int i,j,k,count;
	int a,b;
	int tag=0;
	scanf("%d",&n);

	for(t=6;t<=n;t=t+2)
	{    tag=0;
	
        
		for(j=2;;j=j+1)
		{
			if(tag!=1)
			{
	
			a=sqrt(j)+2;
			
			for(k=2;k<a;k++)

			{  
			


			count=k+1;
			if((j%k!=0&&j!=2)||j==2)
			{
				if(count>=a)
				{
					b=sqrt(t-j)+2;
				
                      for(i=2;i<b;i++)
					  {
		                 if((t-j)%i==0)
	                        break;
						 else
						 {
							 if((i+1)>=b)
							 {
								 tag=1;
							 }
						 }
							 
					  }

				}
			}

			else  break;
			
			}
			
		}
			else
				break;
		}

		printf("%d=%d+%d\n",t,j-1,t-j+1);
	}

	   
			






	return 0;
}
