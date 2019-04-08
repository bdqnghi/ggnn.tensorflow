int main()
{
	int n,i,j,k=0,flag1,flag2;
	cin>>n;
	char c[200];
	c[0]='1';
	for(i=1;i<200;i++)
	{
		  c[i]='0';
    }
	
	for(i=1;i<=n;i++)
	{
		flag1=0,flag2=0;
	   for(j=0;j<=k;j++)
		{
			if(c[j]-'0'<5)
			{
				c[j]=2*c[j]-'0'+flag2;
				flag2=0;
			}
			else if(c[j]-'0'>=5)
			{
				c[j]=(2*(c[j]-'0'))%10+'0'+flag2;
				flag2=1;
				if(j == k)
					flag1 = 1;
			}
		}
	   if( flag1 ) 
	   {
			   k++;
			   c[k]='1';
	   }
	   
	}
	for(i=0;i<=k;i++)
	   {
		   cout<<c[k-i];
	   }
	return 0;
}

