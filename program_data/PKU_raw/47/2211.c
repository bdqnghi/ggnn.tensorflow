int main()
{
	int a[100];//??????
	int n;
	cin >>n;
	cout <<endl;
	for (int i = 0;i <= n-1;i++)//?????????
		cin >>a[i]; 
	cout <<endl;
	for (int k = n-1;k >=1;k--)//?????????
		cout <<a[k]<<" ";
         cout <<a[0];
	cout <<endl;
	return 0;
}