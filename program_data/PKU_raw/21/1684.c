int main()
{
	int n,min=1000, max=0;
	float average=0.0, sum=0;
	cin>>n;
	int array[N];
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		sum+=array[i];
		if(array[i]>max) max=array[i];
		if(array[i]<min) min=array[i];
	}
	average=sum/n;
	float cha=0;
	
	if(fabs(max-average)>fabs(min-average))
	cout<<max<<endl;
	else if(fabs(max-average)<fabs(min-average))
	cout<<min<<endl;
	else
	cout<<min<<","<<max<<endl;
	
	return 0;
}