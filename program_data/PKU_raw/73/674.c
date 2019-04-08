
int main()
{
	int a[5][5],b=0;
	for(int i=0;i<5;++i)
		for(int j=0;j<5;++j)
		{
			cin>>a[i][j];
		}
	for(int i=0;i<5;++i)
	{   int max1=a[i][0],y1=0,x1=-1;
		for(int j=1;j<5;++j)
			if(a[i][j]>max1)
			{
				max1=a[i][j];
				y1=j;
			}
		for(int j=0;j<5;++j)
		{if(a[j][y1]<a[i][y1])
		{x1=i;break;
		}
			}
		if(x1==-1)
		{cout<<i+1<<" "<<y1+1<<" "<<a[i][y1];b=1;
		}
	}
	if(b==0)
		cout<<"not found";
	return 0;
}