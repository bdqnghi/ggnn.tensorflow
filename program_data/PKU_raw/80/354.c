
int mon1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int mon2[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int cal(int y,int m,int d)
{
	int num=0,i;
	while(y>400)
	{
		y-=400;
		num+=146097;
	}
	if(y==400)
	{
		num+=145731;
		for(i=0;i<m-1;i++)
			num+=mon2[i];
		num+=d;
	}
	else
	{
		while(y>100)
		{
			y-=100;
			num+=36524;
		}
		if(y==100)
		{
			num+=36159;
			for(i=0;i<m-1;i++)
				num+=mon1[i];
			num+=d;
		}
		else
		{
			while(y>4)
			{
				y-=4;
				num+=1461;
			}
			if(y==4)
			{
				num+=365*3;
				for(i=0;i<m-1;i++)
					num+=mon2[i];
				num+=d;
			}
			else
			{
				num+=365*(y-1);
				for(i=0;i<m-1;i++)
					num+=mon1[i];
				num+=d;
			}
		}
	}
	return num;
}





int main()
{
	int y1,y2,m1,m2,d1,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	cout<<cal(y2,m2,d2)-cal(y1,m1,d1)<<endl;
	return 0;
}
