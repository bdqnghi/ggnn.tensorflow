void main()
{
	unsigned int n,p,m;
	scanf("%u",&n);
	for(p=6;p<=n;p++)
	{
        if(p%2==0)
		{
			m=p;
			int i,j,f,k;
			for(i=3;i<=m/2;i=i+2)
			{
				f=1;
				for(k=2;k<=sqrt(i);k++)
				{
					
					if(i%k==0)
					{
						f=0;
						break;
					}
				}
				if(f==1)
				{
					j=m-i;
                     f=1;
					for(k=2;k<=sqrt(j);k++)
					{
					   
						if(j%k==0)
						{
							f=0;
							break;
						}  
					}
					if(f==1)
					{
						printf("%u=%u+%u\n",m,i,j);
						break;
					}
				}
			
				
			}

		}
		else continue;
	}


}