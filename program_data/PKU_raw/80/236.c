
int main()
{
	int y1,y2,m1,m2,d1,d2,i,sum=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};//????
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	if(y1==y2) //????
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
				month[1]+=1; //???2?29?
		for(i=m1;i<m2-1;i++)
		{
			sum+=month[i];
		}
		if(m1==m2) sum+=d2-d1;
		else
		{
			sum+=month[m1-1]-d1;
			sum+=d2;
		}
	}
	else //?????
	{
		for(i=m1;i<12;i++)//?????
		{
			sum+=month[i];
			if(i==1&&((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)))
				sum+=1;
		}
		sum+=month[m1-1]-d1; 
		for(i=0;i<m2-1;i++) //??????
		{
			sum+=month[i];
			if(i==1&&((y2% 4 == 0 && y2 % 100 != 0) || (y2% 400 == 0)))
				sum+=1;
		}
		sum+=d2;
		for(i=y1+1;i<y2;i++) //???????
		{
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
				sum+=366;
			else sum+=365;
		}
	}
	cout<<sum;
	return 0;
}