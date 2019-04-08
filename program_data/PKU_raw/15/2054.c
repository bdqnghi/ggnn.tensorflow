int main()
{
	int i,j,n,num,min1=2000,min2=2000,max1=-1,max2=-1;
	int area;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>num;
			if(num==0)
			{
				if(i<min1)
					min1=i;
				else if(i>max1)
					max1=i;
				if(j<min2)
					min2=j;
				else if(j>max2)
					max2=j;
			}
		}
	}
	area=(max1-min1-1)*(max2-min2-1);
	cout<<area<<endl;
	return 0;
}