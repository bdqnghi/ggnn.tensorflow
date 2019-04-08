const int MAX = 260;
int main()
{
	int i = 0,j = 0,k = 0,l = 0;
	int carry = 0 ;                //????
	int temp = 0;
	int len1 = 0,len2 = 0,bigger = 0;
	char ch1[MAX];
	char ch2[MAX];
	int num1[MAX];
	int num2[MAX];
	int result[MAX];
	cin>>ch1>>ch2;
	len1 = strlen(ch1);
	len2 = strlen(ch2);
	if(len1 > len2){bigger = len1;}
	else{bigger = len2;}
	for(j = 0;j < MAX;j++)
	{
		num1[j] = num2[j] = result[j] = 0;
	}
	for(i = 0;i <= len1 - 1;i++)
	{
		num1[MAX - len1 + i] = ch1[i] - '0';
	}
	for(i = 0;i <= len2 -1 ;i++)
	{
		num2[MAX - len2 + i] = ch2[i] - '0';
	}
	for(k = MAX - 1;k >= MAX - bigger;k--)
	{
		carry = 0;
		temp = num1[k] + num2[k] + result[k];
		if(temp < 10){result[k] = temp;carry = 0;}
		else{result[k] = temp % 10;carry = 1;}
		result[k - 1] = result[k -1] + carry;
	}
	for(l = 0;(l <= MAX -1) && (result[l] == 0);l++);
	if(l == MAX){cout<<'0';}
	else
	{
		for(i = l;i <= MAX - 1;i++)
		{
			cout<<result[i];
		}
	}
	return 0;
}