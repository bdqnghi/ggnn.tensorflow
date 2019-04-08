//?????????
//by.???

int f(int a[100][100],int n)                                   //??????
{
	int rmin[100],cmin[100];                                   //???????????????????????????
	int i,j,k,l;
	for(i=0;i<=n-1;i++)
	{
		rmin[i]=a[i][0];
		for(j=0;j<=n-1;j++)
		{
			if(a[i][j]<rmin[i])
			{
				rmin[i]=a[i][j];                              //?????????
			}
		}
	}
	for(k=0;k<=n-1;k++)
		for(l=0;l<=n-1;l++)
			a[k][l]-=rmin[k];                                 //???????????????
	for(i=0;i<=n-1;i++)
	{
		cmin[i]=a[0][i];
		for(j=0;j<=n-1;j++)
		{
			if(a[j][i]<cmin[i])
			{
				cmin[i]=a[j][i];                              //?????????
			}
		}
	}
	for(k=0;k<=n-1;k++)
		for(l=0;l<=n-1;l++)
			a[l][k]-=cmin[k];                                 //???????????????
	return 0;
}
int main()
{
	int n;
	cin>>n;                                                   //??n
	int i=1,sum[100]={0},t;
	while(i<=n)                                               //??n???,???????????
	{
		int a[100][100];
		int j,k,l,m,s,y;
		for(j=0;j<=n-1;j++)
		{
			for(k=0;k<=n-1;k++)
			{
				cin>>a[j][k];                                 //???????
			}
		}
		for(l=1;l<=n-1;l++)                                   //?????n-1?????
		{
			y=f(a,n-l+1);                                     //??
			sum[i]+=a[1][1];                                  //sum[i]?????a[1][1]?
			for(m=1;m<=n-l-1;m++)
			{
				for(s=0;s<=n-l;s++)
				{
					a[m][s]=a[m+1][s];                        //???
				}
			}				
			for(m=1;m<=n-l-1;m++)
			{
				for(s=0;s<=n-l-1;s++)
				{
					a[s][m]=a[s][m+1];                        //???
				}
			}	
		}
		i++;
	}
	for(t=1;t<=n;t++)
		cout<<sum[t]<<endl;                                   //?????????sum?
	return 0;
}