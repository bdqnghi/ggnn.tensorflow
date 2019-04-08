
int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int y1,y2,m1,m2,d1,d2;
	int i,j,k,c=0,sum=0;
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    if(y1!=y2)
	{
	for(i=y1+1;i<=y2-1;i++)
	{
		if(i%4==0&&i%100!=0||i% 400 == 0)
		{
			c++;
		}
	}
	sum=sum+c*366+(y2-y1-1-c)*365;


	if(y1% 4 == 0 && y1% 100 != 0 || y1% 400 == 0)
	{
		for(i=m1+1;i<=12;i++)
		{
			sum=sum+b[i];
		}
		sum=sum+b[m1]-d1;
	}
	else
	{
		for(i=m1+1;i<=12;i++)
		{
			sum=sum+a[i];
		}
		sum=sum+a[m1]-d1;
	}
	
    if(y2% 4 == 0 && y2% 100 != 0||y2% 400 == 0)
	{
		for(i=1;i<=m2-1;i++)
		{
			sum=sum+b[i];
		}
		sum=sum+d2;
	}
	else
	{
		for(i=1;i<=m2-1;i++)
		{
			sum=sum+a[i];
		}
		sum=sum+d2;
	}
	
	}




	else
	{
		if(y1% 4 == 0 && y1% 100 != 0 || y1% 400 == 0)
	    {
		for(i=m1+1;i<=m2-1;i++)
		{
			sum=sum+b[i];
		}
		sum=sum+b[m1]-d1+d2;
		if(m1==m2)
		{
			sum=sum-b[m1];
		}
	
		}
		else
	    {
		for(i=m1+1;i<=m2-1;i++)
		{
			sum=sum+a[i];
		}
		sum=sum+a[m1]-d1+d2;
		if(m1==m2)
		{
			sum=sum-a[m1];
		}
	
	    }
		
	
	}




cout<<sum<<endl;
	
		
	return 0;
}




