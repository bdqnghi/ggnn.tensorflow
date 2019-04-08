int main()
{
	int n=0,k=0,j=0,count=0;//?????????
	float x[10],y[10],z[10],d[45];//???????
	int name[45][3];//??????????
	cin>>n;
	for(k=0;k<n;k++)//????
	{
		cin>>x[k]>>y[k]>>z[k];
	}
	for(k=0;k<n-1;k++)//????
	{
		for(j=k+1;j<n;j++)
		{
			d[count]=sqrt((x[k]-x[j])*(x[k]-x[j])+(y[k]-y[j])*(y[k]-y[j])+(z[k]-z[j])*(z[k]-z[j]));//??
			name[count][1]=k;//??
			name[count][2]=j;//??
			count++;
		}
	}
	for(k=0;k<count-1;k++)//?????
		for(j=0;j<count-1-k;j++)
			if(d[j]<d[j+1])
			{
				float a;
				a=d[j];d[j]=d[j+1];d[j+1]=a;
				a=name[j][1];name[j][1]=name[j+1][1];name[j+1][1]=a;
				a=name[j][2];name[j][2]=name[j+1][2];name[j+1][2]=a;
			}
	for(k=0;k<count;k++)//??
	{
		cout<<"("<<x[name[k][1]]<<","<<y[name[k][1]]<<","<<z[name[k][1]]<<")-("<<x[name[k][2]]<<","<<y[name[k][2]]<<","<<z[name[k][2]]<<")=";
		printf("%.2f\n",d[k]);
	}
	return 0;
}