

	int T[1005]={0};
	int Q[1005]={0};
	int Save[1005][1005]={0};
int main()
{

	int Num=0;
	int i=0;
	int Temp1=0;
	int Temp2=0;
	
	int j=0;
	int Ans=-1000000;

	while(cin>>Num && Num!=0)
	{
		Ans=-2000000;
		memset(Save,0,sizeof(Save));
		memset(T,0,sizeof(T));
		memset(Q,0,sizeof(Q));

	for (i=1;i<=Num;i++)
	{
		cin>>T[i];
	}
	for (i=1;i<=Num;i++)
	{
		cin>>Q[i];
	}

	sort(T+1,T+Num+1);
	sort(Q+1,Q+Num+1);

	reverse(T+1,T+Num+1);
	reverse(Q+1,Q+Num+1);
	

	for (i=1;i<=Num;i++)
	{
		j=0;
		Temp1=Save[i-1][j];

		if ( T[Num-(i-1-j)] - Q[i] <0)
		{
			Temp1-=200;
		}
		if ( T[Num-(i-1-j)] - Q[i] >0)
		{
			Temp1+=200;
		}

			Save[i][j]=Temp1;


	//	cout<<"("<<i<<","<<j<<")-"<<Save[i][j]<<endl;
		for (j=1;j<=i;j++)
		{
			Temp1=Save[i-1][j];
			Temp2=Save[i-1][j-1];
			if ( T[Num-(i-1-j)] - Q[i] <0)
			{
				Temp1-=200;
			}
			if ( T[Num-(i-1-j)] - Q[i] >0)
			{
				Temp1+=200;
			}
			if ( T[j] - Q[i] < 0)
			{
				Temp2-=200;
			}
			if ( T[j] - Q[i] > 0)
			{
				Temp2+=200;
			}

			if (i<=j)
			{
				Temp1=-2000000;
			}
			if (Temp1> Temp2)
			{
				Save[i][j]=Temp1;
			}
			else
			{
				Save[i][j]=Temp2;
			}
		//			cout<<"("<<i<<","<<j<<")-"<<Save[i][j]<<endl;
		}
	}

	for (i=1;i<=Num;i++)
	{
		if ( Save[Num][i]> Ans)
		{
			Ans=Save[Num][i];
		}
	}
		
	cout<<Ans<<endl;
	}
	return 0;
}