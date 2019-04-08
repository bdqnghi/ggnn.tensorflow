//************************************************
//*  ?????4.cpp                             *
//*  ?????? 1200012877                     *
//*  ???2012 ? 11 ? 18 ?                   *
//*  ?????????                          *
//************************************************
int main()
{
	char win[501];
	int sum,t=0;
	cin.getline(win,501);
	sum=strlen(win);
	for(int i=2;i<=500;i=i+2)
	{
		for(int j=0;j<sum;j++)
		{
			if (j+i-1>sum)break;
			if (win[j]==win[j+i-1])
			{
				t=0;
				for(int p=1;p<=(i/2)-1;p++)
				{
					if (win[j+p]==win[j+i-1-p])
					{
						t++;
					}
				}
				if (t==(i/2)-1)
				{
					for(int k=j;k<=j+i-1;k++)
					{
						cout<<win[k];
					}
				    cout<<endl;
				}
			}
		}
	}
	return 0;
}
