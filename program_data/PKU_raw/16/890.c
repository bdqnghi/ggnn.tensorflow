int main()
{
	char str[10000]={0},*start,*end,t;
	int len;
	cin >> str;
	len = strlen(str);
	start = str;
	end = &str[len-1];
	while(start<end){
		t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
	cout << str;
	return 0;
}