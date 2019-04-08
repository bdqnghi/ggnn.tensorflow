double fangcha(double array[],int k)
{
	double sum=0;
	for(int i=0;i<k;i++){
		sum+=array[i];}
	double arrange=sum/k;
	double array2[101];
	for(int i=0;i<k;i++){
		array2[i]=(array[i]-arrange)*(array[i]-arrange);}
	double sum2=0;
	for(int i=0;i<k;i++){
		sum2+=array2[i];}
	double result=sqrt(sum2/k);
	return result;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		double num[101];
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>num[j];}
		printf("%.5lf\n",fangcha(num,k));}
	return 0;
}