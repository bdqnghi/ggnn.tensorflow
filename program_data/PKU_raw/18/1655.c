int main()
{
	int n,i,j,k,m,h,l,s=0,n1;
	cin>>n;//??n
	n1=n;//??n
	int min1[100];
	int min2[100];//??????????
	int a[100][100];//??
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{cin>>a[j][k];}//????
		}
		while(n!=1)//?????1?
		{
		for(j=0;j<n;j++)
		{min1[j]=a[j][0];
			for(k=0;k<n;k++)
			{if(min1[j]>a[j][k])
			{min1[j]=a[j][k];}
			}
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{a[j][k]=a[j][k]-min1[j];}
		}
		for(k=0;k<n;k++)
		{min2[k]=a[0][k];
			for(j=0;j<n;j++)
			{if(min2[k]>a[j][k])
			{min2[k]=a[j][k];}
			}
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<n;j++)
			{a[j][k]=a[j][k]-min2[k];}//?????????????
		}
		s=s+a[1][1];//??a[1][1]
		for(m=2;m<n;m++)
		{
			a[0][m-1]=a[0][m];
			a[m-1][0]=a[m][0];
		}
		for(h=2;h<n;h++)
		{
			for(l=2;l<n;l++)
			{a[h-1][l-1]=a[h][l];
			}
		}//????????
		n--;//??????
	}
		cout<<s<<endl;//???
		s=0;
		n=n1;//??
	}
	return 0;
}