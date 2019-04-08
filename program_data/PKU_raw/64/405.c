void main()
{
	int m,n,i,j,k,a,c,t,u;
	int tt[100][3];
	int pp[10000][6];
	float xx[10000],b;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(u=0;u<3;u++)
		{
			scanf("%d",&tt[i][u]);
		}
	}
	n=m*(m-1)/2;
	t=n;
	for(a=0,j=0;j<m-1;j++)
	{
		for(k=j+1;k<m;k++,a++)
		{
              xx[a]=sqrt((tt[j][0]-tt[k][0])*(tt[j][0]-tt[k][0])+(tt[j][1]-tt[k][1])*(tt[j][1]-tt[k][1])+(tt[j][2]-tt[k][2])*(tt[j][2]-tt[k][2]));
			  pp[a][0]=tt[j][0];
			  pp[a][1]=tt[j][1];
			  pp[a][2]=tt[j][2];
			  pp[a][3]=tt[k][0];
			  pp[a][4]=tt[k][1];
			  pp[a][5]=tt[k][2];
		}
	}
	for(i=0;i<n-1;n--)
	{
		for(j=i;j<n-1;j++)
		{
			if(xx[j]<xx[j+1]) 
			{
				b=xx[j]; xx[j]=xx[j+1]; xx[j+1]=b;
                c=pp[j][0]; pp[j][0]=pp[j+1][0]; pp[j+1][0]=c;
				c=pp[j][1]; pp[j][1]=pp[j+1][1]; pp[j+1][1]=c;
				c=pp[j][2]; pp[j][2]=pp[j+1][2]; pp[j+1][2]=c;
				c=pp[j][3]; pp[j][3]=pp[j+1][3]; pp[j+1][3]=c;
				c=pp[j][4]; pp[j][4]=pp[j+1][4]; pp[j+1][4]=c;
				c=pp[j][5]; pp[j][5]=pp[j+1][5]; pp[j+1][5]=c;
			}
		}
	}
	for(k=0;k<t;k++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",pp[k][0],pp[k][1],pp[k][2],pp[k][3],pp[k][4],pp[k][5],xx[k]);
	}
	



}

