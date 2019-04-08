void main()
{
	int a[100][16],i,j,k;
	for(i=0;;i++)
	{
		scanf("%d",&a[i][0]);
		if(a[i][0]==-1) break;
		else
		{
			for(j=1;j<16;j++)
			{
				scanf("%d",&a[i][j]);
				if(a[i][j]==0) break;
			}
		}
	}

	for(i=0;i<100;i++)
	{
		
    	int num=0;
		if(a[i][0]==-1) break;
		else
		{
			for(j=0;(j<16)&&(a[i][j]!=0);j++)
			{
				for(k=j+1;(k<16)&&(a[i][k]!=0);k++)
				{
					if(a[i][k]==2*a[i][j]) num++;
					else if(a[i][j]==2*a[i][k]) num++;
				}
			}
		}
     	printf("%d\n",num);
	}



}


