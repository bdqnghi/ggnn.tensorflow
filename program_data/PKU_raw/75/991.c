int main()
{
	int tim[1000], i, j, num, mac = 0;
	int star[1000],end[1000];
	for(i = 0; i < 1000; i++)
		tim[i] = 0;
	cin >> star[0];
	i = 1;
	while(cin.get() != '\n')
		cin >> star[i++];
	num = i;                        
	cin >> end[0];
	for(i = 1; i < num; i++)
	{
		cin.get();
		cin >> end[i];
	}
	for(i = 0; i < num; i++)
		for(j = star[i]; j < end[i]; j++)
			tim[j]++;
	for(i = 0; i < 1000; i++)
		mac = mac > tim[i] ? mac : tim[i];
	cout << num << " "<< mac << endl;
	return 0;
}