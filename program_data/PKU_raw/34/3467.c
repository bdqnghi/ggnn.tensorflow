
void ou(int n);
void ji(int n);
int main()
{
	int  n;
	cin >> n;
	if (n % 2 == 1)
		ji(n);
	else
		ou(n);
}
void ou(int n)
{
	int answer;
	answer = n / 2;
	cout << n << "/2=" << answer << endl;
	if (answer % 2 == 0)
		ou(answer);
	else
		ji(answer);
}
void ji(int n)
{
	if (n == 1){
		cout << "End"; return;
	}
	int answer;
	answer = n * 3 + 1;
	cout << n << "*3+1=" << answer << endl;
	if (answer % 2 == 0)
		ou(answer);
	else
		ji(answer);
	
}