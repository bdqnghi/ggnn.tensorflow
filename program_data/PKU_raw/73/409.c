int main()
{
	int a[6][6],x,y,max[6] = {0},maxx[6],maxy[6],yy,i;
	for (y = 1;y <= 5;y++)
	{
		for (x = 1;x <= 5;x++)
			cin>>a[x][y];
	}
	for (y = 1;y <= 5;y++)
	{
		for (x = 1;x <= 5;x++)
		{
			if (a[x][y] > max[y])
			{
				max[y] = a[x][y];
				maxx[y] = x;
				maxy[y] = y;
			}
		}
	}
	for (y = 1;y <= 5;y++)
	{
		for (yy = 1;yy <= 5;yy++)
		{
			if (max[y] > a[maxx[y]][yy])
			{
				max[y] = 0;
				break;
			}
		}
	}
	i = 1;
	for (y = 1;y <= 5;y++)
	{
		if (max[y] != 0)
		{
			cout<<maxy[y]<<" "<<maxx[y]<<" "<<max[y];
			i = 0;
		}
	}
	if (i == 1)
		cout<<"not found"<<endl;
	return 0;
}
