//**************************
//*????????        *
//*??????1000012797?*
//*?????2010?12?    *
//**************************
int main()
{
	int i=0,j,n,count=0;
	double a[10]={0},b[10]={0},c[10]={0};            //????a,b,c??????????????????
	cin>>n;                                  //????
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}                                           //??????
	struct dis                                    //???????????????
	{
		int x;
		int y;
		double len;
	}d[45],temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d[count].x=i;
			d[count].y=j;
			d[count].len=sqrt(pow(a[i]-a[j],2)+pow(b[i]-b[j],2)+pow(c[i]-c[j],2));
			count++;
		}
	}                                    //?????
	j=n*(n-1)/2;
	for(;j>0;j--)
	{
		for(i=0;i<n*(n-1)/2-1;i++)
		{
			if(d[i].len<d[i+1].len){temp=d[i];d[i]=d[i+1];d[i+1]=temp;}
		}
	}                                             //?????
	for(i=0;i<n*(n-1)/2;i++)
	{
		cout<<"("<<(int)a[d[i].x]<<","<<(int)b[d[i].x]<<","<<(int)c[d[i].x]<<")"<<"-"<<"("<<(int)a[d[i].y]<<","<<(int)b[d[i].y]<<","<<(int)c[d[i].y]<<")"<<"=";
		cout<<fixed<<setprecision(2)<<d[i].len<<endl;
	}                                            //??
	return 0;                                  //??
}
