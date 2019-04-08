//**********************************
//****       ??????      *****
//****        1200012718       *****
//**        ???????        **
//**********************************
int main()
{
	int n;
	cin>>n;       //????n
	int x[11]={0},y[11]={0},z[11]={0};    //??????xyz?????????????
	double x1[11]={0},y1[11]={0},z1[11]={0};    //?????
	double d[46]={0};      //d??????10????45???
	int begin[46]={0},end[46]={0};  //??????????????
	for (int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
		x1[i]=x[i];
		y1[i]=y[i];
		z1[i]=z[i];
	}     //??????????
	int k=1;   //???k?????d??????????
	for (int i=1;i<=n;i++)
		for (int j=i+1;j<=n;j++)
		{
			d[k]=sqrt((x1[i]-x1[j])*(x1[i]-x1[j])+(y1[i]-y1[j])*(y1[i]-y1[j])+(z1[i]-z1[j])*(z1[i]-z1[j]));
			begin[k]=i;
			end[k]=j;
			k++;
		}            //???????begin end??????
		for (int i=1;i<=n*(n-1)/2-1;i++)   //????
			for (int j=1;j<=n*(n-1)/2-i;j++)
			{
				if (d[j]<d[j+1])
				{
					double m=d[j];
					d[j]=d[j+1];
					d[j+1]=m;           //??????????????????????
					int t=begin[j];
					begin[j]=begin[j+1];
					begin[j+1]=t;
					t=end[j];
					end[j]=end[j+1];
					end[j+1]=t;
				}
			}
			for(int i=1;i<=n*(n-1)/2;i++)
			{
				cout<<"("<<x[begin[i]]<<","<<y[begin[i]]<<","<<z[begin[i]]<<")-("<<x[end[i]]<<","<<y[end[i]]<<","<<z[end[i]]<<")=";
				printf("%.2f\n",d[i]);//?????
			}
	
			return 0;
}
