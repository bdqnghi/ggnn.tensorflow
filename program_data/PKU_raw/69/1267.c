
int main(){
	int a[251] = {0};
	int b[251] = {0};
	char sa[251];
	char sb[251];
	cin.getline(sa, 251);
	cin.getline(sb, 251);
	int len1 = strlen(sa);
	for(int i = 0; i < len1; i++)
		a[250-i] = sa[len1-i-1] - '0';
	int len2 = strlen(sb);
	for(int i = 0; i < len2; i++)
		b[250-i] = sb[len2-i-1] - '0';
	for(int i = 250; i> 0; i--)
	{
		a[i]+=b[i];
		if(a[i] >= 10)
		{
			a[i]-=10;
			a[i-1] += 1;
		}
	}
	int flag = 0;
	for(int i = 0; i < 251; i++)
	{
		if(a[i] != 0)
			flag = 1;
		if(flag)
			cout << a[i];
	}
	if(flag == 0)
		cout << 0;
	cout << endl;
}
