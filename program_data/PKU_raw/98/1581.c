int main()
{
	char word[9999][50];
	int i , j , n , len , cnt = 0;
	cin >> n;
	for(i = 0 ; i < n ; i++)
		cin >> word[i];
	for(i = 0 ; i < n - 1 ; i++)
	{
		if(cnt + strlen(word[i])   <= 80 && cnt + strlen(word[i]) + 1 + strlen(word[i + 1])  > 80 )
		{
			cout << word[i] << endl;
			cnt = 0;
		}
		else//(cnt + strlen(word[i]) + 1 <= 80 && cnt + strlen(word[i]) + 1 + strlen(word[i + 1]) + 1 <= 80)
		{
			cout << word[i] << " " ;
			cnt = cnt + strlen(word[i]) + 1;
		}
		
	}
	cout << word[n - 1];
	return 0;
}