int main()
{
	int n,i,j,k;//??????
	int x[10],y[10],z[10];//?????????
	float d[90]={0},temp=0;//?????????0
	cin>>n;
	for(i=0;i<=n-1;++i)
		cin>>x[i]>>y[i]>>z[i];//????
	for(i=0;i<=n-2;++i)
	{
		for(j=i+1;j<=n-1;++j)
		{
			d[10*i+j]=sqrt((double)((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));//????
		}
	}
	for(j=1;j<=(n-1)*n/2;++j)//???? ??????
	{
		for(i=1;i<=89;++i)
		{
			if(d[i]==0) continue;//???0 ?????? continue
			if(d[i]>temp)
			{
				temp=d[i];//????
				k=i;
			}
		}
		cout<<"("<<x[k/10]<<","<<y[k/10]<<","<<z[k/10]<<")"<<"-"<<"("<<x[k%10]<<","<<y[k%10]<<","<<z[k%10]<<")"<<"="<<fixed<<setprecision(2)<<temp<<endl;//??
		d[k]=0;//???0
		temp=0;//???0
		k=0;//???0 ??????
	}
	return 0;
}
	
