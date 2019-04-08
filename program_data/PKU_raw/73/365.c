int main()
{
	int point[6][6],i,j,biaoji=0;
	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
			cin>>point[i][j];//????
	int max=0,c,b;
	for(i=1;i<6;i++)
	{
		max=0;//???max
		for(j=1;j<6;j++)
		{
			if(point[i][j]>max)
			{
				max=point[i][j];//???????
				b=i;//????
				c=j;//????
			}
		}
		int count=0,a;
		for(a=1;a<6;a++)
		{
			if(max<point[a][c])//?????????????????
				count=count+1;
		}
		if(count==4)
		{
			cout<<b<<" "<<c<<" "<<max<<endl;
			biaoji=1;//????????1
		}
	}
	if(biaoji==0)//?????????
		cout<<"not found"<<endl;
return 0;
}
