
void main()
{
	float max,s[11][11],z[11][3];
	int i,j,n,x,y,k;
	scanf("%d",&n);
	memset(s,0,sizeof(s));
	memset(z,0,sizeof(z));
	for (i=1;i<=n;i++)
	{
		scanf("%f%f%f",&z[i][0],&z[i][1],&z[i][2]);
		for (j=1;j<i;j++)
		{
			s[j][i]=sqrt((z[i][0]-z[j][0])*(z[i][0]-z[j][0])+(z[i][1]-z[j][1])*(z[i][1]-z[j][1])+(z[i][2]-z[j][2])*(z[i][2]-z[j][2]));
		}
	}
	for (i=1;i<=n*(n-1)/2;i++)
	{
		max=s[1][2];
		x=1;y=2;
		for (j=1;j<n;j++)
			for (k=j+1;k<=n;k++)
			{
				if (s[j][k]>max)
				{
					x=j;y=k;
					max=s[j][k];
				//printf("%.2f\n",max);
				}
			}
        printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",z[x][0],z[x][1],z[x][2],z[y][0],z[y][1],z[y][2],s[x][y]);
		s[x][y]=0;
	}
	

}