/*?? 1000010573*/



int main()
{
	int a[111][111] , b[111][111] , c[111][111];
	int x1 = 1 , x2 = 1 , y1 = 1 , y2 = 1 ;
	int i = 0 , j = 0 , r = 0 , sum = 0 ;
	//????a
	cin>>x1>>y1;
	for(i = 0 ; i<x1 ; i++)
	{
		for(j = 0 ; j<y1 ; j++)
		{
			cin>>a[i][j];
		}
	}
    //????b
	cin>>x2>>y2;
	for(i = 0 ; i<x2 ; i++)
	{
		for(j = 0 ; j<y2 ; j++)
		{
			cin>>b[i][j];
		}
	}
    //??????
    for(i = 0; i<x1 ;i++)
	{
			for(j = 0 ; j<y2 ;j++)
			{		sum = 0;
					for(r = 0 ; r<x2 ; r++)
					{
						sum = sum + a[i][r]*b[r][j];
				        c[i][j] = sum;
						
					}
			}
	}
	//????c??????????
	for(i = 0 ; i<x1 ; i++)
	{
		for(int j = 0 ; j<y2 ; j++)
		{
			cout<<c[i][j];
			if(j!=y2-1)
			{  cout<<" ";  }
			else
			{   cout<<endl;   }
		}
	}
	return 0 ;
}

