int N,height[25];
int main(void)
{
	int i;
	int work(int,int);
	cin >> N;
	for (i = 0 ; i < N ; i++) cin >>height[i];
	cout << work(0,99999) <<endl;
	return 0;
}
int work(int sub,int high)
{
	int i,max,num1,num2;
	for ( i = sub ; high < height[i] ; i++);
	if (sub >= N || i >= N) return 0;
	num1 = work(i+1,height[i]) + 1;
	num2 = work(sub+1,high);
	return num1 > num2 ? num1 : num2;
}//HONZE TEST
