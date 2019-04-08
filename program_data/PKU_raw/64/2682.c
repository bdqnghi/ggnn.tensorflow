int p[100][3];        //????????n?????
struct Distance
{
	int p1,p2;        //????p1?p2???
	double d;
};
int main()
{
	int n;
	cin>>n;
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			cin>>p[i][j];
	struct Distance a[100*100+10],temp;      
	int m=0;                                //????m
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)                                   
			{	
				double sum=0;
				for(k=0;k<3;k++)
					sum+=pow(p[i][k]*1.0-p[j][k]*1.0,2*1.0);
				a[m].d=sqrt(sum);                               
				a[m].p1=i;                                       //????????????Distance a[m]
				a[m].p2=j;
				m++;
			}
		for(i=0;i<m;i++)                          //????
			for(j=0;j<m-i;j++)
				if(a[j].d<a[j+1].d)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
	for(i=0;i<m;i++)
	{
		
		cout<<"("<<p[a[i].p1][0]<<","<<p[a[i].p1][1]<<","<<p[a[i].p1][2]<<")"<<"-"
		<<"("<<p[a[i].p2][0]<<","<<p[a[i].p2][1]<<","<<p[a[i].p2][2]<<")"<<"="
		<<fixed<<setprecision(2)<<a[i].d<<endl;
	}
	return 0;
}
