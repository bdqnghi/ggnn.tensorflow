int main()
{
	int i,k;//???? i???k??
	int x,y;
	int r=0,c=0;//???? ??????
	int a[5][5];//??
	int w=0;//?? 
	                                     
	for(r=0;r<5;r++)                          
	{
		for(c=0;c<5;c++)
		{
			scanf("%d",&a[r][c]);
		}

	}                                                                        
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++)
		{
			if(a[i][k]>=a[i][1]&&a[i][k]>=a[i][2]&&a[i][k]>=a[i][3]&&a[i][k]>=a[i][4]&&a[i][k]>=a[i][0])
			{
				if(a[i][k]<=a[0][k]&&a[i][k]<=a[1][k]&&a[i][k]<=a[2][k]&&a[i][k]<=a[3][k]&&a[i][k]<=a[4][k])
				{
					x=i+1;
					y=k+1;
					printf("%d %d %d\n",x,y,a[i][k]);

					w=1;
				}
			}                                  
		}
	}
	if(w==0)
	{
		printf("not found");
	}

	return 0;
}