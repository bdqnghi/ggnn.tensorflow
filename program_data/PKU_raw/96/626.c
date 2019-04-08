//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?11?10?                        *
//*  ????: ??13                                *
//****************************************************



int main()
{
	int a[101] = {0}; //??? 
	int b[101] = {0}; //? 
	int num = 0, h = 0, p, len = 0, i = 0; //len?????? 
	char c;
	while((c = getchar()) != '\n' ) //?? 
	{
		len++;
		a[len] = (int) c - 48;
	}
	while (i <= len - 1 ) //?????? 
	{
		i++;
		num = num * 10 + a[i];  
		h++;
		b[h] = num / 13;
		num = num % 13;
	}
	for (i = 1; i <= h; i++) //??????????? 
		if (b[i] != 0) break;
	p = i; 
	for (i = p; i <= h; i++) cout << b[i];
	if (p > h) cout << 0;
	cout << endl;
	cout << num << endl;
	return 0;
}