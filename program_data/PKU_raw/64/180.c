int main()
{
	struct Distance
	{
		int p1[3];
		int p2[3];
		double length;
	}d[50],temp;
	int n,i,j,k=0;
	cin>>n;
	int point[10][3];
	double result;
	for(i=0;i<n;i++)
		cin>>point[i][0]>>point[i][1]>>point[i][2];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			d[k].p1[0]=point[i][0];  d[k].p1[1]=point[i][1];	d[k].p1[2]=point[i][2];
			d[k].p2[0]=point[j][0];  d[k].p2[1]=point[j][1];	d[k].p2[2]=point[j][2];
			result=(point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2]);
			d[k].length=sqrt(result*1.0);
			k++;
		}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-1-i;j++)
			if(d[j].length<d[j+1].length) {temp=d[j];d[j]=d[j+1];d[j+1]=temp;}
	for(i=0;i<k;i++)
		cout<<"("<<d[i].p1[0]<<","<<d[i].p1[1]<<","<<d[i].p1[2]<<")"<<"-"<<"("<<d[i].p2[0]<<","<<d[i].p2[1]<<","<<d[i].p2[2]<<")"<<"="<<fixed<<setprecision(2)<<d[i].length<<endl;

		return 0;


}

