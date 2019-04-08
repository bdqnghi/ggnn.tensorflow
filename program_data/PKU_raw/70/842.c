
int main()
{
	double a[1000][2];           //??????????????
	double max=0,dis,temp;
	int n,i,j,k;                     //n??????,ijk??
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i][1]>>a[i][2];
	for(j=1;j<n;j++)
		for(k=0;k<j;k++)
		{
			temp=(a[j][1]-a[k][1])*(a[j][1]-a[k][1])+(a[j][2]-a[k][2])*(a[j][2]-a[k][2]);
			dis=sqrt(temp);
			if(max<dis) max=dis;
		}
	cout<<max<<endl;
	return 0;
}

