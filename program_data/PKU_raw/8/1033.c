int n1, n2;
int num1[100], num2[100];
void in(int n,int a[])
{
	for(int i = 0; i < n; i++)
		cin>>a[i];
}
void com(int n, int a[])
{
	int temp;
	for(int i = 0; i < n - 1; i++)
		for(int j = 0; j < n - i - 1; j++)
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
}
int main()                                  //??? 
{
	cin>>n1>>n2;
	in(n1, num1);
	com(n1, num1);
	in(n2, num2);
	com(n2, num2);
	for(int i = 0; i < n1; i++)
		cout<<num1[i]<<' ';
	for(int j = 0; j < n2 - 1; j++)
		cout<<num2[j]<<' ';
	cout<<num2[n2 - 1]<<endl;
    return 0;
}  
            
