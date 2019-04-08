void main()
{
	int road_1[10]={0},road_2[10]={0};
	int n,x,y,m,i,j;
	scanf("%d %d",&x,&y);
	
	//?????????
	road_1[0]=x;//?x????
	for(n=1;x!=1;n++)
	{
		if(x%2==0)
		{
			road_1[n]=x/2;
			x=x/2;
		}
		else
		{
			road_1[n]=(x-1)/2;
			x=(x-1)/2;
		}
	}
	
	road_2[0]=y;//?y????
	for(m=1;y!=1;m++)
	{
		if(y%2==0)
		{
			road_2[m]=y/2;
			y=y/2;
		}
		else
		{
			road_2[m]=(y-1)/2;
			y=(y-1)/2;
		}
	}

	//????
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(road_1[i]==road_2[j])
			{
				printf("%d",road_1[i]);
				goto lable;
			}
		}
lable:;
}