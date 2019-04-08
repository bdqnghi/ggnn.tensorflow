
int main ()
{
	int n;
	int a[310]={0};
	cin>>n;
	int sum = 0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i];
	}
	double average = (double)sum/(double)n;
	for (int i=0;i<n-1;i++)
		for (int j=0;j<n-1-i;j++)
			if (a[j]>a[j+1]){
				int t;
				t = a[j]; a[j] = a[j+1]; a[j+1] = t;
			}
	int maxp[310]={0},num = 0;
	double dmax = 0;
	for (int i=0;i<n;i++){
		double d = fabs((double)a[i]-average);
		if (d > dmax)
			dmax = d;
	}
	for (int i=0;i<n;i++){
		double d = fabs((double)a[i]-average);
		if (fabs(d-dmax)<1e-8)
			maxp[num++] = i;
	}
	for (int i=0;i<num-1;i++)
		cout<<a[maxp[i]]<<",";
	cout<<a[maxp[num-1]];
	return 0;
}