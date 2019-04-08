
int reverse(int num);

int main()
{
	int i;
	int temp;
	for (i=0; i<6; i++){
		scanf("%d", &temp);
		printf("%d\n", reverse(temp));
	}

	return 0;
}

int reverse(int num)
{
	int len;
	int sign;
	int out = 0;		// Modified Unsigned
	int i;
	if (num==0) return 0;
	sign = num / abs(num);
	num = abs(num);
	len = (int)log10(num) + 1;
	for (i=0; i<len; i++)
		out += (num/(int)(pow(10, i))%10)*pow(10,len-i-1);
	return sign*out;

}