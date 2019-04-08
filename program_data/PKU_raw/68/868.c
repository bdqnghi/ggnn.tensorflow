int main()
{
	int n;
	cin>>n;
	int i,j,k;
	for(i=4;i<=n;i+=2)
	{    int count=0;                                   //???N???????

		int c;
		c=i/2;	

		for(j=3;j<=c&&count==0;j+=2)     //?  3?  i?????j
		{   		
			double genhao1,genhao2;
			genhao1=sqrt(j);
			int temp=0;			
			
			for( k=3; k<=genhao1 ; k++ )
			{
				if(j%k==0)
					temp+=1;
			}
			if(temp==0)
			{
				int er,temp2=0;
				er=i-j;
				genhao2=sqrt(er);
				for(k=3;k<=genhao2;k++)	
					if(er%k==0)	
						temp2+=1;		
				if(temp2==0)
				{
					cout<<i<<"="<<j<<"+"<<er<<endl;
					count+=1;
				}
			}
		}
	}
	return 0;
}