int main()
{
	int n,i,j,a[80],b[80],k=0,m,code1,code2;
	double S[80],t;
	struct S
	{
	double x;
	double y;
	double z;
	}point[13];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>point[i].x>>point[i].y>>point[i].z;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)//????Cn2
		{
			S[k]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z));//???
			a[k]=i;b[k]=j;
			k++;//
		}
    for(i=0;i<k;i++)
		for(j=k-1;j>i;j--)//?????
			if(S[j]>S[j-1])
			{
				t=S[j];
				S[j]=S[j-1];
				S[j-1]=t;//????
				m=a[j];
				a[j]=a[j-1];
				a[j-1]=m;//???????
				m=b[j];
				b[j]=b[j-1];
				b[j-1]=m;//???????
			}
    for(i=0;i<k;i++)
	{
		code1=a[i];code2=b[i];
		cout<<"("<<(int)point[code1].x<<","<<(int)point[code1].y<<","<<point[code1].z<<")-("
			<<(int)point[code2].x<<","<<(int)point[code2].y<<","<<point[code2].z<<")=";
		printf("%.2lf",S[i]);
		cout<<endl;
	}
	return 0;
}
