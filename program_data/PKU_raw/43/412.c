int main()
{
	int n,a,k,m,i,j,x=0,y=0;
	int prime1,prime2;
	cin>>n;
	for (i=3;i<=n/2;i=i+2)
	{
		for (j=1;j<=i;j=j+2)
		{
			if (i%j==0) 
			{
				x++;
			}
		}
			if (x==2) prime1=1;
			else prime1=0;
			x=0;
			
			if (prime1==1)
			{
				a=n-i;
				for (m=1;m<=a;m=m+2)
				{	
					if (a%m==0)
					{
						y++;
					}
				}
					
					if (y==2) prime2=1;
					else prime2=0;
					y=0;
				
					if (prime2==1)
						cout<<i<<" "<<a<<endl;
		
				
			}
		
	}
	return 0;
}
