
int main() {
	int a[101]={0};
	int high=0,low=0;
	int k=1;
	int z=1;
	int n;
	int max;

	cin >>n;
	for(z=1;z<=n;z++)
	{
		cin >>high>>low;
		if((high<=140)&&(high>=90)&&(low<=90)&&(low>=60)) a[k]++;
		else k++;
	}
	max=a[1];
	for(k=1;k<=100;k++)
		if(a[k]>max) max=a[k];
	cout <<max;
	return 0;
}