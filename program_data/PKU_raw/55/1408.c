//*****************
//??????? 
//?????
//???2011-11-16
//*****************
char function(int);         //????
int main()
{
	int a, b, k = 0, sum = 0, t, i = 0, count = 0;
	int sum1 = 1;
	char n[100000], c[100000];
	cin >> a >> n >> b;
	for(i = 0;n[i] != '\0';i++)          //??n????
		k++;
	for(i = k - 1;i >= 0;i--)
	{
		if(n[i] - '0' <= 9)           //????n???10???
			sum = sum + (n[i] - '0') * sum1;
		if(n[i] - '0' > 9 && n[i] - '0' <= 42)
			sum = sum +(n[i] - '0' - 7) * sum1;
		if(n[i] - '0' > 42 && n[i] - '0' <= 74)
			sum = sum + (n[i] - '0' - 39) * sum1;
		sum1 = sum1 * a;
	}
	for(i = 0;;i++)           
	{
		
		t = sum % b;             //???
		sum = sum / b;
		c[i] = function(t);
	    count++;              //?????????
		if(sum == 0)
			break;
	}
	for(i = count - 1;i >= 0;i--)
		cout << c[i];           //??????
	return 0;
}
char function(int t)               //??????????????
{
	char a[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return a[t];
}