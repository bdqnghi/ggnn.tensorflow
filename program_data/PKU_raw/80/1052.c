int main()
{
	int y1,m1,d1,y2,m2,d2,days=0;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int mo[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int i;
	if(y2==y1){
		if(m1!=m2){
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			for(int j=m1;j<m2;j++)
			{
				days=days+mo[j];
			}
			days=days+mo[m1-1]-d1;
		}
		else
		{
			for(int j=m1;j<m2;j++)
			{
				days=days+m[j];
			}
			days=days+m[m1-1]-d1;
		}
		}
		if(m1==m2)
			days = d2-d1;
		cout<<days<<endl;
	}
	if(y2-y1==1)
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			for(int j=m1;j<12;j++)
			{
				days=days+mo[j];
			}
			days=days+mo[m1-1]-d1;
		}
		else
		{
			for(int j=m1;j<12;j++)
			{
				days=days+m[j];
			}
			days=days+m[m1-1]-d1;
		}
		if((y2% 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			if(m2==1)
			{days=days+d2;}
			if(m2>1){
			for(int j=0;j<m2-1;j++)
			{
				days=mo[j]+days;}
			days=days+d2;}
		}
		else
		{if(m2==1)
			{days=days+d2;}
			if(m2>1){
			for(int j=0;j<m2-1;j++)
			{
				days=m[j]+days;}
			days=days+d2;}}
		cout<<days<<endl;
	}
	if(y2-y1>1)
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			for(int j=m1;j<12;j++)
			{
				days=days+mo[j];
			}
			days=days+mo[m1-1]-d1;
		}
		else 
		{for(int j=m1;j<12;j++)
			{
				days=days+m[j];
			}
			days=days+m[m1-1]-d1;
		}
		for(int k=1;k<y2-y1;k++)
		{
			if(((y1+k) % 4 == 0 && (y1+k )% 100 != 0) || ((y1+k) % 400 == 0))
			{
				days=days+366;
			}
			else{
				days=days+365;}
		}
        if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			if(m2==1)
			{
				days=days+d2;
			}
			else 
			{
				for(int x=0;x<m2-1;x++)
				{
					days=days+mo[x];
				}
				days=days+d2;
			}
		}
		else
		{if(m2==1)
			{
				days=days+d2;
			}
			else 
			{
				for(int x=0;x<m2-1;x++)
				{
					days=days+m[x];
				}
				days=days+d2;
			}
		}
		cout<<days<<endl;
	}
	return 0;
}
