double dis(double x1,double y1,double x2,double y2)
{
	double dis;
	double x=pow(x2-x1,2);
	double y=pow(y2-y1,2);
	dis=sqrt(x+y);
	return dis;
	return 0;
}

int main()
{
	double x[100],y[100];
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	double p=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(dis(x[i],y[i],x[j],y[j])>p)
				p=dis(x[i],y[i],x[j],y[j]);
	}
    printf("%.4f\n",p);
	return 0;
}