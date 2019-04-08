void fun(int m, int i);                                                  //????
int num ;
int main()
{
	int n, i, a;
	cin>>n;
	for(i = 0; i < n; i++)
	{
		cin>>a;
		num = 0;
		fun(a, 2);                                                      //????
		cout<<num + 1<<endl;                                            //???????a=a???????num??1
	}
	return 0;
}
void fun(int m, int i)
{
	int k = sqrt(m);
	for(i = i; i <= k; i++)
	{
		if(m % i == 0)
		{
		         num++;                           
			fun(m / i, i);                                             //?????????
		}
	}
}