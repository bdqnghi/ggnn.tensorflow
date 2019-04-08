void main()
{
	int n,i,j,S,x1=0,y1=0,x2=0,y2=0,a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			if (a[i][j]==0)
			{
				x1=i;
				y1=j;
				break;
			}
		if ((a[i][j]==0)&&(j<n))    //PG????????????????????????0??j++??9??a[0][9]=0,??????
			break;
	}
    for(i=x1;i<n;i++)
	{
		if(a[i][y1]!=0)
		{
			x2=i-1;
			break;
		}
		else continue;
	}
    for(j=y1;j<n;j++)
    {
        if(a[x2][j]!=0)
        {
            y2=j-1;
	        break;
	    }
	    else continue;
    }
    S=(x2-x1-1)*(y2-y1-1);
    printf("%d\n",S);
}


