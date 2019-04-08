void main()
{
	int num[100],speed_tian[100][1000],speed_qi[100][1000],money[100],win,lose,i,j,k,l,end_qi,x,start_qi,start_tian,mid;
	for(i=0;;i++)
	{
		scanf("%d",&num[i]);
		if (num[i]==0) break;
		else 
		{
			for(j=0;j<=num[i]-1;j++)	scanf("%d",&speed_tian[i][j]);
			for(j=0;j<=num[i]-1;j++)	scanf("%d",&speed_qi[i][j]);
		}
	}//??????
	for(j=0;j<=i-1;j++)
	{
		for (k=0;k<=num[j]-1;k++)
			for (l=0;l<num[j]-1-k;l++)
				if(speed_tian[j][l]<speed_tian[j][l+1])
				{
					mid=speed_tian[j][l];
					speed_tian[j][l]=speed_tian[j][l+1];
					speed_tian[j][l+1]=mid;
				}
	}//????????
	for(j=0;j<=i-1;j++)
	{
		for (k=0;k<=num[j]-1;k++)
			for (l=0;l<num[j]-1-k;l++)
				if(speed_qi[j][l]<speed_qi[j][l+1])
				{
					mid=speed_qi[j][l];
					speed_qi[j][l]=speed_qi[j][l+1];
					speed_qi[j][l+1]=mid;
				}
	}//????????
	for(j=0;j<=i-1;j++)//??????
	{
		start_qi=0;
		start_tian=0;
		end_qi=num[j]-1;
		win=0;
		lose=0;
		x=num[j]-1;
		while(x>=start_tian)
		{
			if (speed_tian[j][x]>speed_qi[j][end_qi])
			{
				win++;
				end_qi--;
			}
			else if(speed_tian[j][x]<speed_qi[j][end_qi])
			{
				lose++;
				start_qi++;
			}
			else 
			{
				while(speed_tian[j][start_tian]>speed_qi[j][start_qi])
				{
					win++;
					start_tian++;
					start_qi++;
				}
				if(speed_tian[j][x]<speed_qi[j][start_qi]) lose++;
				start_qi++;
			}
			x--;
		}

		money[j]=win*200-lose*200;
	}
	for(j=0;j<=i-1;j++) printf("%d\n",money[j]);
}
		



