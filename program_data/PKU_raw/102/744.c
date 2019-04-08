int cmp(const void * x,const void * y)
{
	return *(float *)x>*(float *)y?1:-1;
}
int main()
{
   // ifstream if1("e:\\input1.txt");
	int n,ptra=0,ptrb=0;
    float a[40],b[40];
	char s[10];
//	if1>>n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
	//	if1>>s;
		if(s[0]=='m')
			cin>>a[ptra++];
	//	if1>>a[ptra++];
		else
			cin>>b[ptrb++];
	//	if1>>b[ptrb++];
	}
    qsort(a,ptra,sizeof(float),cmp);
	qsort(b,ptrb,sizeof(float),cmp);
	for(int j=0;j<ptra;j++)
	{
	//	cout<<setprecision(3)<<a[j]<<" ";
		printf("%.2f ",a[j]);
	}
	for(int k=ptrb-1;k>0;k--)
	{
	//	cout<<setprecision(3)<<b[k]<<" ";
		printf("%.2f ",b[k]);
	}
//	cout<<setprecision(3)<<b[0];
			printf("%.2f",b[0]);
	return 0;
}