int main()
{
	int mount[20][20],m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&mount[i][j]);
		for(i=0;i<=n-1;i++)
		{if(i==0)
		{    if(mount[0][i]>=mount[1][i]&&mount[0][i]>=mount[0][i+1])
			printf("0 %d\n",i);
		}
		else if(i!=0&&i!=n-1)
		{if(mount[0][i]>=mount[1][i]&&mount[0][i]>=mount[0][i+1]&&mount[0][i]>=mount[0][i-1])
			printf("0 %d\n",i);
		}
        else if(i==n-1)
		{if(mount[0][i]>=mount[1][i]&&mount[0][i]>=mount[0][i-1])
			printf("0 %d\n",i);
		}
		}
       for(j=1;j<=m-2;j++)
		   for(i=0;i<=n-1;i++)
		{if(i==0)
		if(mount[j][i]>=mount[j+1][i]&&mount[j][i]>=mount[j][i+1]&&mount[j][i]>=mount[j-1][i])
			printf("%d %d\n",j,i);
		if(i!=0&&i!=n-1)
        if(mount[j][i]>=mount[j+1][i]&&mount[j][i]>=mount[j][i+1]&&mount[j][i]>=mount[j][i-1]&&mount[j][i]>=mount[j-1][i])
			printf("%d %d\n",j,i);
		if(i==n-1)
          if(mount[j][i]>=mount[j+1][i]&&mount[j][i]>=mount[j][i-1]&&mount[j][i]>=mount[j-1][i])
			printf("%d %d\n",j,i);
		}
			for(i=0;i<=n-1;i++)
		{if(i==0)
		  if(mount[m-1][i]>=mount[m-2][i]&&mount[m-1][i]>=mount[m-1][i+1])
			printf("%d %d\n",m-1,i);
		if(i!=0&&i!=n-1)
          if(mount[m-1][i]>=mount[m-2][i]&&mount[m-1][i]>=mount[m-1][i+1]&&mount[m-1][i]>=mount[m-1][i-1])
			printf("%d %d\n",m-1,i);
        if(i==n-1)
          if(mount[m-1][i]>=mount[m-1][i]&&mount[m-1][i]>=mount[m-1][i-1])
			printf("%d %d\n",m-1,i);
		}
			return 0;
}