
int main(){
	int a[251], b[251], c[251];
	
	for(int i = 0; i < 251; i++){
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}
	char str_a[251] = {0};
	char str_b[251] = {0};
	cin >> str_a >> str_b;

	int len_a = strlen(str_a);
	int len_b = strlen(str_b);

	int mid;
	if(len_a%2 == 0)
		mid = len_a/2 - 1;
	else
		mid = len_a/2;
	for(int i = 0; i <=mid; i++){
			int tmp = str_a[i];
			str_a[i] = str_a[len_a - 1 - i];
			str_a[len_a - 1 - i] = tmp;
	}

	if(len_b%2 == 0)
		mid = len_b/2 - 1;
	else
		mid = len_b/2;
	for(int i = 0; i <= mid; i++){
			int tmp = str_b[i];
			str_b[i] = str_b[len_b - 1 - i];
			str_b[len_b - 1 - i] = tmp;
	}

	
	for(int i = 0; i < len_a; i++){
		a[i] = str_a[i] - '0';
	}
	for(int i = 0; i < len_b; i++){
		b[i] = str_b[i] - '0';
	}

	int in = 0;
	int len = 0;
	if(len_a >= len_b)
		len = len_a;
	else
		len = len_b;
	for(int i = 0; i <= len; i++){
		int sum = a[i] + b[i] + in;
		if(sum > 9)
		{
			in = 1;
			c[i] = sum - 10;
		}
		else
		{
			in = 0;
			c[i] = sum;
		}
	}

	int k = 0;
	for(int i = len+1; i >=0; i--){
		if(c[i] != 0)
		{
			k = i;
			break;
		}
	}
	for(int i = k; i >=0; i--)
		cout << c[i];
	return 0;
}