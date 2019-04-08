int power(int a,int b)
{
	int result=1;
	int i;
	for(i=1;i<=b;i++)
	{
		result=result*a;
	}
	return result;
}
int main()
{
	int count,i,j,k,max,submax,sum;
	char a[1000];
	char b[]="0000";
	char c[]="0123456789";
	char d[4]=",0";
    max=0;
	submax=0;
	sum=0;
	cin >> a;
	count=0;
	j=0;

    for(i=0;i<1000;i++)
	{
		
		if(a[i]!=d[0]&&a[i]!=d[3])
		{
			b[count]=a[i];
			count=count+1;
			
		}
		if(a[i]==d[0]||a[i]==d[3])
		{
		
			for(j=0;j<=count;j++)
			{
				
				
				if(b[j]==c[0])	
				{
					sum=sum+0*power(10,(count-j-1));
			       
				}
				if(b[j]==c[1])
				{	
					sum=sum+1*power(10,(count-j-1));
		            
				}
				if(b[j]==c[2])
				{
					sum=sum+2*power(10,count-j-1);
				
				}
				if(b[j]==c[3])
				{
					sum=sum+3*power(10,count-j-1);
					
				}
				if(b[j]==c[4])
				{
					sum=sum+4*power(10,count-j-1);
					
				}
				if(b[j]==c[5])
				{
					sum=sum+5*power(10,count-j-1);
				
				}
				if(b[j]==c[6])
				{
					sum=sum+6*power(10,count-j-1);
					
				}
				if(b[j]==c[7])
				{
					sum=sum+7*power(10,count-j-1);
					
				}
				if(b[j]==c[8])
				{
					sum=sum+8*power(10,count-j-1);
					
				}
				if(b[j]==c[9])
				{
					sum=sum+9*power(10,count-j-1);
				
				}
			}
		
		    if(sum>max)
			{
				submax=max;
				max=sum;
			}
		    if(sum<max&&sum>=submax)
			{
			    submax=sum;
			}

		for(k=0;k<4;k++)
                   {
                             b[k]=c[0];
                   } 

                   count=0;
		sum=0;
	
		}
                   		if(a[i]==d[3])
		{
			break;
		}
		    
	}
    if(submax!=0)
	{
		cout<<submax<<"\n";
	}
	else
	{
		cout<<"No\n";
	}
    return 0;
}