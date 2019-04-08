int main()                                                  //?????
{
	int n;                                                  //????
	cin>>n;                                                 //????
	double a[20][4]={0};                                    //????a???n????
	double dis[50];                                         //?????????????????
	int u[50],v[50],l = 1;                                  //????u,v??????????
	for(int i = 1 ; i <= n ; i++)                           //??n??????
	{
		for(int j = 1 ; j <= 3 ; j++)                       
		{
			cin>>a[i][j];
		}
	}
	
	for(int i = 1 ; i < n ; i++)                            //??????????????????dis,?????u,v???????????
	{
		for(int j = i+1 ; j <= n ; j++)
		{
			dis[l]=sqrt((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])+(a[i][3]-a[j][3])*(a[i][3]-a[j][3]))*1.00;
			u[l]=i;
			v[l]=j;
			l++;
		}
	}

    int m=0;                                                //????????dis?????????????u,v?????
	int q=0;
	double p=0;
	for(int i = 1 ; i <= l-2 ; i++)     
	{
		for(int j = 1 ; j < l-1 ; j++)
		{
			if(dis[j]<dis[j+1])
			{
                 p=dis[j];
				 dis[j]=dis[j+1];
				 dis[j+1]=p;

				 m=u[j];
				 u[j]=u[j+1];
				 u[j+1]=m;

				 q=v[j];
				 v[j]=v[j+1];
				 v[j+1]=q;
			}
		}
	}

	for(int i = 1 ; i <= l-1 ; i++)                          //??????
	{
		cout<<"("<<a[u[i]][1]<<","<<a[u[i]][2]<<","<<a[u[i]][3]<<")-("<<a[v[i]][1]<<","<<a[v[i]][2]<<","<<a[v[i]][3]<<")"<<"=";
		printf("%.2f\n",dis[i]);
	}
	return 0;                                                //???????????????????

}




