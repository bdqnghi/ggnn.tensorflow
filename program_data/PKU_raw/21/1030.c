
float a[300]={0.0},dis[300]={0.0},result[2]={0.0};
float pingjun (float a[],int n)	;

int main()
{
	int n,i,j=0,num=0;
	float pingjunshu,max;
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i];
	pingjunshu=pingjun (a,n);
	for (i=0;i<n;i++)
	{
		if (a[i]>=pingjunshu)
			dis[i]=a[i]*1.0-pingjunshu;
		else
			dis[i]=pingjunshu-a[i]*1.0;
	}														//????????????
	max=dis[0];
	for (i=0;i<n;i++)
		if (dis[i]>max)
			max=dis[i];										//?????
	for (i=0;i<n;i++)
		if (dis[i]==max)
		{
			result[j]=a[i];
			j++;
			num++;
		}
		if (num==1)
			cout<<result[0]<<endl;
		else
		{
			if (result[0]<result[1])
				cout<<result[0]<<","<<result[1]<<endl;
			else
				cout<<result[1]<<","<<result[0]<<endl;
		}
		return 0;
}

float pingjun (float a[],int n)								//??????????????????????????
{
	float sum=0.0;
	int i;
	for (i=0;i<n;i++)
		sum=sum+a[i]*1.0;										//?????
	return (sum*1.0/n);
}